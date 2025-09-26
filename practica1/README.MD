# PRACTICA 1
### DANNA SOFIA DANIELS 378829

# 

## INTRODUCCION

### OBJETIVO

El objetivo de esta práctica es identificar los elementos fundamentales de los lenguajes de programación: nombres, marcos de activación, bloques de alcance, administración de memoria, expresiones, comandos, control de secuencia como lo es; selección, iteración y recursión, subprogramas, y tipos de datos.

# 
## Elementos fundamentales de los lenguajes de programación

### Nombres
Son los nombres que se dan a las variables, funciones, clases y otros elementos del código. Permiten hacer referencia a datos y a operaciones dentro del programa. 
Ejemplo:

    int bookID, memberID;

### Marcos de activacion
Son estructuras de datos dinámicas que se crean cada vez que se llama a una función. 
Almacenan la información necesaria para la ejecución de la función, incluyendo los parámetros, las variables locales, y la dirección de retorno al código llamante. 
Ejemplo:

    member_t *new_member = (member_t *)malloc(sizeof(member_t));

### Bloques de alcance
Se refieren al ámbito en el que un nombre (como una variable) es válido y puede ser accedido. 
Un programa puede tener varios ámbitos: el ámbito global y los ámbitos locales dentro de funciones o bloques de código. 
Ejemplo:

    static int static_var = 0; //global
    void issueBook(book_t *library, member_t *members)
    {
        int bookID, memberID; //local
    }

### Administración de memoria
Se refiere a los mecanismos que utiliza el lenguaje para asignar y liberar memoria para los datos del programa. 
Esto puede ser gestionado manualmente por el programador (como en C) o automáticamente a través de un recolector de basura (como en Java o Python).
Ejemplo:

    // asignar memoria dinamica
    member_t *new_member = (member_t *)malloc(sizeof(member_t));
    // liberar
    free(new_member);
    new_member = NULL;

### Expresiones
Combinaciones de valores, variables, operadores y llamadas a funciones que se evalúan y producen un único valor. 
Ejemplo:

    memberFound->issued_count++;


### Comandos 
Son las instrucciones más pequeñas y completas que forman un programa. 
Ejemplo:

    static int static_var = 0;

### Control de secuencia
El control de secuencia se refiere al orden en que se ejecutan las instrucciones de un programa, siendo la selección la ejecución de un bloque de código basado en una condición (como if/else), la iteración la repetición de un bloque de código hasta que una condición deje de cumplirse (bucles como for o while), y la recursión la ejecución de una función que se llama a sí misma. Los subprogramas son bloques de código reutilizables (funciones o métodos), y los tipos de datos son los clasificadores de los valores que pueden almacenar las variables. 

Ejemplo:

    while (current_book) {
        if (current_book->id == bookID && current_book->quantity > 0) {
            bookFound = current_book;
            break;
        }
        current_book = current_book->next;
    }

## Selección
Permite ejecutar diferentes bloques de código según si una condición es verdadera o falsa. 

Ejemplo:

    if (bookFound && memberFound) {
        bookFound->quantity--;
        memberFound->issued_count++;
        memberFound->issued_books = realloc(memberFound->issued_books, memberFound->issued_count * sizeof(int));
        incrementHeapAllocations(memberFound->issued_books, memberFound->issued_count * sizeof(int));
        printf("Memoria reasignada para los libros prestados del miembro (ID: %d) en el heap\n", memberFound->id);
        memberFound->issued_books[memberFound->issued_count - 1] = bookID;
        printf("\nLibro prestado satisfactoriamente!\n");
    } else {
        printf("\nLibro o miembro no encontrados.\n");
    }

## Iteración y recursión
Iteración: Se utiliza para repetir un bloque de instrucciones mientras se cumple una condición, o para cada elemento en una colección. 

Ejemplo:

        for (int i = 0; i < memberFound->issued_count; i++) {
            if (memberFound->issued_books[i] == bookID) {
                found = 1;
                for (int j = i; j < memberFound->issued_count - 1; j++) {
                    memberFound->issued_books[j] = memberFound->issued_books[j + 1];
                }
                memberFound->issued_count--;
                memberFound->issued_books = realloc(memberFound->issued_books, memberFound->issued_count * sizeof(int));
                incrementHeapAllocations(memberFound->issued_books, memberFound->issued_count * sizeof(int));
                printf("Memoria reasignada para los libros prestados del miembro (ID: %d) en el heap\n", memberFound->id);
                break;
            }
        }

Recursión: Es una técnica donde una función se llama a sí misma para resolver un problema, dividiéndolo en subproblemas más pequeños. 

Ejemplo:

    void displayBooksRecursive(book_t *library) {
        if (!library) {
            return;
        }
        printf("\nID libro: %d\nTitulo: %s\nAutor: %s\nAno de publicacion: %d\nGenero: %s\nCantidad: %d\n",
            library->id, library->title, library->author, library->publication_year, genreToString(library->genre), library->quantity);
        displayBooksRecursive(library->next);
    }

## Subprogramas
Son conjuntos de instrucciones que se agrupan para realizar una tarea específica y pueden ser llamados desde distintas partes del programa, promoviendo la reutilización de código.

Ejemplo:

    void addBook(book_t **library, int* count ) {
    ... //se puede agregar un libro desde cualquier parte del programa
    }

## Tipos de datos
Son clasificadores que definen qué tipo de valor puede almacenar una variable y qué operaciones se pueden realizar con ella.

Ejemplo:

    typedef struct _book {
    int id;
    char title[100];
    char author[100];
    int publication_year;
    genre_t genre;
    int quantity;
    struct _book *next;
    } book_t;

## Referencias

FlorUrbinaLopez. (2024). Componentes de los lenguajes de programación.pptx. Slideshare. https://www.slideshare.net/slideshowcomponentes-de-los-lenguajes-de-programacinpptx/254164560

‌Equipo editorial Etecé. (2020, August 16). Programación (Informática) - Qué es, usos, tipos y elementos. Concepto. https://concepto.de/programacion/

‌Lauwens, B. (2018). Introducción a la Programación en Julia. Introajulia.org. https://introajulia.org/#:~:text=Se%20utiliza%20para%20mostrar%20c%C3%B3digo%20de%20programas%2C,variables%20de%20entorno%2C%20sentencias%20y%20palabras%20reservadas.

Monterde, U. (2019). Lenguajes de Programación. Unam.mx. https://repositorio-uapa.cuaed.unam.mx/repositorio/moodle/pluginfile.php/1023/mod_resource/content/2/contenido/index.html

‌Franco, E. A. (n.d.). Estructuras de datos (. https://docencia.eafranco.com/materiales/algoritmia/14/Tema14.pdf)

INTRODUCCION AL LENGUAJE C INTRODUCCION AL LENGUAJE C PARA SISTEMAS EMBEBIDOS PARA SISTEMAS EMBEBIDOS. (n.d.). https://triton.astroscu.unam.mx/fruiz/introduccion/c/Ansi_C_Embebidos.pdf

‌051.1 Lección 1. (2025). Lpi.org. https://learning.lpi.org/es/learning-materials/050-100/051/051.1/051.1_01/#:~:text=Gesti%C3%B3n%20de%20memoria%20La%20gesti%C3%B3n%20de%20memoria,el%20programador%20manualmente%20o%20de%20forma%20autom%C3%A1tica.

‌Conceptos basicos de la Programacion Orientada a Objetos. (2025). Sc.ehu.es. http://www.sc.ehu.es/sbweb/fisica/cursoJava/fundamentos/clases1/clases.htm#:~:text=En%20el%20lenguaje%20Java%20no%20es%20necesario,producen%2C%20olvidarse%20de%20liberar%20la%20memoria%20reservada.

‌Glosario. (2025). Python Documentation.
https://docs.python.org/es/3.12/glossary.html

Iscyp, G. (2018). Datos Estructurados Strings, Arreglos y Registros. https://webs.um.es/ldaniel/iscyp18-19/10-EstructurasDatos-Slides.pdf

‌Introducción a la Programación. (2025). Infor.uva.es. https://www.infor.uva.es/~jvegas/cursos/prog/tema3.html#:~:text=3.7%20Expresiones%20y%20Operadores%20Las%20expresiones%20son,caracter%20o%20cualquier%20otro%20tipo%20de%20datos.

BBC Bitesize. (2019, March 13). The three basic programming constructs - The function of structural components of programs - Edexcel - GCSE Computer Science Revision - Edexcel - BBC Bitesize. BBC Bitesize. https://www-bbc-co-uk.translate.goog/bitesize/guides/z433rwx/revision/1?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=sge#:~:text=Sequence%20is%20the%20order%20in,when%20a%20program%20is%20running.

‌‌Estructuras de control — Python para Ingenieros. (2025). Github.io. https://jorgedelossantos.github.io/apuntes-python/Estructuras%20de%20control.html

‌Estructuras de Control - Programación en Java. (2022). Gitlab.io. http://francisco.escobar.gitlab.io/programacion/conceptos/EstructurasControl/#:~:text=Estructuras%20de%20Control-,Estructurta%20Secuencial,el%20principio%20hasta%20el%20final.&text=Este%20problema%20puede%20ser%20solucionado,No%20hay%20saltos.

Segura, J. B., & Baltazar, M. (2021, March). Codificación de sentencias secuenciales. Portal Académico Del CCH. https://portalacademico.cch.unam.mx/cibernetica1/algoritmos-y-codificacion/sentencias-secuenciales

‌
‌