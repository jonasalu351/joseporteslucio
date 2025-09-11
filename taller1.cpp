#include <stdio.h>

#define N 10

void llenarArray(int a[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        do {
            printf("Ingrese el número %d (entero positivo): ", i + 1);
            if (scanf("%d", &temp) != 1) {
                printf("Entrada inválida. Intente de nuevo.\n");
                while (getchar() != '\n'); // limpiar buffer
                temp = -1;
            }
        } while (temp <= 0);
        a[i] = temp;
    }
}

void mostrarArray(int a[], int n) {
    printf("Arreglo actual: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void ordenarSelectionAscendente(int a[], int n) {
    int arr[N];
    for (int i = 0; i < n; i++) arr[i] = a[i]; // copia para no modificar el original
    printf("Proceso de Selection Sort Ascendente:\n");
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        printf("Paso %d: ", i + 1);
        for (int k = 0; k < n; k++) printf("%d ", arr[k]);
        printf("\n");
    }
    printf("Resultado final (ascendente): ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void ordenarInsertionDescendente(int a[], int n) {
    int arr[N];
    for (int i = 0; i < n; i++) arr[i] = a[i]; // copia para no modificar el original
    printf("Proceso de Insertion Sort Descendente:\n");
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printf("Paso %d: ", i);
        for (int k = 0; k < n; k++) printf("%d ", arr[k]);
        printf("\n");
    }
    printf("Resultado final (descendente): ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int a[N] = {0};
    int opcion;
    int datosIngresados = 0;

    do {
        printf("\n--- Menú ---\n");
        printf("1. Registrar datos\n");
        printf("2. Mostrar arreglo original\n");
        printf("3. Ordenar Selection Sort Ascendente\n");
        printf("4. Ordenar Insertion Sort Descendente\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                llenarArray(a, N);
                datosIngresados = 1;
                break;
            case 2:
                if (datosIngresados)
                    mostrarArray(a, N);
                else
                    printf("Primero registre los datos.\n");
                break;
            case 3:
                if (datosIngresados)
                    ordenarSelectionAscendente(a, N);
                else
                    printf("Primero registre los datos.\n");
                break;
            case 4:
                if (datosIngresados)
                    ordenarInsertionDescendente(a, N);
                else
                    printf("Primero registre los datos.\n");
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 5);

    return 0;
}