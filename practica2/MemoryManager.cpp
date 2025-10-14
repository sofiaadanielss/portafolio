
#include "MemoryManager.h"
#include <iomanip> 

MemoryManager& MemoryManager::getInstance() {
    static MemoryManager instance;
    return instance;
}

void MemoryManager::trackHeapAllocation(void* ptr, size_t size) 
{
    m_heap_allocations++;
    m_heap_records[ptr] = size;

    #if MEMORY_MANAGEMENT_DISPLAY
        std::cout << "Memoria asignada en el heap: Puntero=" << ptr << ", Tamano=" << size << " bytes\n";
    #endif
}

void MemoryManager::trackHeapDeallocation(void* ptr) 
{
    m_heap_deallocations++;
    m_heap_records.erase(ptr); 

    #if MEMORY_MANAGEMENT_DISPLAY
        std::cout << "Memoria liberada en el heap: Puntero=" << ptr << "\n";
    #endif
}

void MemoryManager::trackStackAllocation() 
{
    m_stack_allocations++;
}

void MemoryManager::trackStackDeallocation() 
{
    m_stack_deallocations++;
}

void MemoryManager::displayUsage() const 
    {
    #if MEMORY_MANAGEMENT_DISPLAY
        std::cout << "\n"
                << "-------------------------------------------------\n"
                << "|               Uso de Memoria                  |\n"
                << "-------------------------------------------------\n"
                << "| Segmento de Texto (Codigo)                    |\n"
                << "|-----------------------------------------------|\n"
                << "| Segmento de Datos (Globales y Estaticos)      |\n"
                << "|-----------------------------------------------|\n"
                << "| Segmento BSS (Globales y Estaticos no inicializados) |\n"
                << "|-----------------------------------------------|\n"
                << "| Heap (Memoria Dinamica)                       |\n"
                << "|   Asignaciones: " << std::left << std::setw(28) << m_heap_allocations << "|\n"
                << "|   Liberaciones: " << std::left << std::setw(28) << m_heap_deallocations << "|\n"
                << "|-----------------------------------------------|\n"
                << "| Stack (Variables Locales)                     |\n"
                << "|   Asignaciones: " << std::left << std::setw(28) << m_stack_allocations << "|\n"
                << "|   Liberaciones: " << std::left << std::setw(28) << m_stack_deallocations << "|\n"
                << "-------------------------------------------------\n"
                << "\n"
                << "-------------------------------------------------\n"
                << "|            Detalles de Memoria Heap           |\n"
                << "-------------------------------------------------\n"
                << "| Puntero          | Tamano (bytes)              |\n"
                << "-------------------------------------------------\n";

        for (const auto& record : m_heap_records) {
            std::cout << "| " << std::left << std::setw(16) << record.first
                    << " | " << std::left << std::setw(27) << record.second << " |\n";
        }

        std::cout << "-------------------------------------------------\n\n";
    #endif
}