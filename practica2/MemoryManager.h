#pragma once 

#include <iostream>
#include <map>
#include <cstddef> 

class MemoryManager 
{
public:

    static MemoryManager& getInstance();
    MemoryManager(const MemoryManager&) = delete;
    void operator=(const MemoryManager&) = delete;
    void trackHeapAllocation(void* ptr, size_t size);
    void trackHeapDeallocation(void* ptr);
    void trackStackAllocation();
    void trackStackDeallocation();
    void displayUsage() const;

private:

    MemoryManager() = default;
    ~MemoryManager() = default;

    size_t m_heap_allocations = 0;
    size_t m_heap_deallocations = 0;
    size_t m_stack_allocations = 0;
    size_t m_stack_deallocations = 0;
    
    std::map<void*, size_t> m_heap_records;
};