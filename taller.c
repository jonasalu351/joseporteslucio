//gcc taller.c para compilar//

#include <stdio.h>

#define N 5 

typedef struct {
    int codigo;
    float nota;
} Estudiante;


Estudiante estudiantes[N] = {
    {2024101, 4.5},
    {2024102, 3.2},
    {2024103, 2.8},
    {2024104, 4.8},
    {2024105, 3.9}
};

float notaMaximaRec(const Estudiante arr[], int n, int idx, float max) {
    if (idx == n) return max; // Caso base
    if (arr[idx].nota > max) max = arr[idx].nota;
    return notaMaximaRec(arr, n, idx + 1, max); // Llamado recursivo
}

float sumaNotasRec(const Estudiante arr[], int n, int idx) {
    if (idx == n) return 0; // Caso base
    return arr[idx].nota + sumaNotasRec(arr, n, idx + 1); // Llamado recursivo
}

void selectionSortRec(Estudiante arr[], int n, int idx) {
    if (idx == n - 1) return; // Caso base

    int minIdx = idx;
    for (int j = idx + 1; j < n; j++) {
        if (arr[j].codigo < arr[minIdx].codigo) {
            minIdx = j;
        }
    }
    if (minIdx != idx) {
        Estudiante temp = arr[idx];
        arr[idx] = arr[minIdx];
        arr[minIdx] = temp;
    }
    selectionSortRec(arr, n, idx + 1); // Llamado recursivo
}

void mostrarEstudiantes(const Estudiante arr[], int n) {
    printf("Codigo\tNota\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\n", arr[i].codigo, arr[i].nota);
    }
}

int main() {
    int opcion;
    int salir = 0;
    Estudiante copia[N];

    do {
        printf("\n--- MENU ---\n");
        printf("1. Buscar la Nota Maxima del Curso (Recursivo)\n");
        printf("2. Calcular el Promedio del Curso (Recursivo)\n");
        printf("3. Ordenar Codigos de Estudiantes (Selection Sort Recursivo)\n");
        printf("4. Mostrar Lista de Estudiantes\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                float max = notaMaximaRec(estudiantes, N, 0, estudiantes[0].nota);
                printf("La nota maxima del curso es: %.2f\n", max);
                break;
            }
            case 2: {
                float suma = sumaNotasRec(estudiantes, N, 0);
                printf("El promedio del curso es: %.2f\n", suma / N);
                break;
            }
            case 3: {
                for (int i = 0; i < N; i++) copia[i] = estudiantes[i];
                selectionSortRec(copia, N, 0);
                printf("Lista ordenada por codigo:\n");
                mostrarEstudiantes(copia, N);
                break;
            }
            case 4: {
                printf("Lista de estudiantes:\n");
                mostrarEstudiantes(estudiantes, N);
                break;
            }
            case 5:
                salir = 1;
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while (!salir);

    return 0;
}

//jose luis portes cuervo //
 //Taller de recursividad y gestión de datos académicos//