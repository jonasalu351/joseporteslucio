Taller de Recursividad y Gestión de Datos Académicos
Descripción

Este programa es un ejercicio de recursividad en C, diseñado para gestionar y analizar datos académicos de estudiantes en un curso. A través de un menú interactivo, el programa permite realizar las siguientes operaciones:

Buscar la nota máxima del curso (uso de recursión).

Calcular el promedio del curso (uso de recursión).

Ordenar los códigos de los estudiantes usando el algoritmo de selección (recursivo).

Mostrar la lista de estudiantes con su código y nota.

El programa usa estructuras (struct) para almacenar los datos de cada estudiante (código y nota) y implementa funciones recursivas para realizar diferentes cálculos y tareas.

Funcionalidades

Buscar la Nota Máxima del Curso (Recursivo):

Utiliza una función recursiva para encontrar la nota más alta entre los estudiantes.

Calcular el Promedio del Curso (Recursivo):

Suma las notas de todos los estudiantes de manera recursiva y luego calcula el promedio.

Ordenar Códigos de Estudiantes (Selection Sort Recursivo):

Utiliza el algoritmo de ordenación Selection Sort de forma recursiva para ordenar a los estudiantes según su código.

Mostrar Lista de Estudiantes:

Imprime una lista de los estudiantes con su código y nota.

Estructura de Datos

La estructura de datos utilizada es un struct llamado Estudiante, que contiene los siguientes campos:

typedef struct {
    int codigo;  // Código del estudiante
    float nota;  // Nota del estudiante
} Estudiante;

Datos Predefinidos

Se incluyen 5 estudiantes con los siguientes datos:

Estudiante estudiantes[N] = {
    {2024101, 4.5},
    {2024102, 3.2},
    {2024103, 2.8},
    {2024104, 4.8},
    {2024105, 3.9}
};

Compilación y Ejecución

Para compilar y ejecutar el programa, sigue estos pasos:

Guarda el código en un archivo llamado taller.c.

Abre una terminal y navega al directorio donde guardaste el archivo.

Compila el programa usando el compilador GCC:

gcc taller.c -o taller


Ejecuta el programa:

./taller

Menú Interactivo

El programa presenta un menú donde el usuario puede seleccionar una de las siguientes opciones:

--- MENU ---
1. Buscar la Nota Maxima del Curso (Recursivo)
2. Calcular el Promedio del Curso (Recursivo)
3. Ordenar Codigos de Estudiantes (Selection Sort Recursivo)
4. Mostrar Lista de Estudiantes
5. Salir
Seleccione una opcion:

Ejemplo de Ejecución
--- MENU ---
1. Buscar la Nota Maxima del Curso (Recursivo)
2. Calcular el Promedio del Curso (Recursivo)
3. Ordenar Codigos de Estudiantes (Selection Sort Recursivo)
4. Mostrar Lista de Estudiantes
5. Salir
Seleccione una opcion: 1
La nota maxima del curso es: 4.80

Funciones Recursivas

notaMaximaRec: Encuentra la nota máxima en una lista de estudiantes de manera recursiva.

sumaNotasRec: Calcula la suma de todas las notas de los estudiantes de manera recursiva.

selectionSortRec: Ordena los estudiantes según su código de manera recursiva utilizando el algoritmo Selection Sort.

Notas

Recursividad: Las funciones principales del programa están diseñadas usando recursión, lo que implica que cada llamada a una función hace referencia a una nueva llamada de la misma función.

Selección Recursiva: La función selectionSortRec implementa un algoritmo de ordenación por selección que utiliza recursión para recorrer la lista y ordenar los estudiantes según su código.

jose luis portes cuervo 

https://github.com/jonasalu351   