#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arreglo[9][9];
    int i, j, k, Numero = 0;
    srand(time(NULL));

    for (i = 0; i < 9; i++) 
    {
        for (j = 0; j < 9; j++) 
        {
            arreglo[i][j] = rand() % 100; 
        }
    }

    printf("Bienvenido, ingresa un numero a verificar del (1 al 100): ");
    scanf("%d", &k);

    for (i = 0; i < 9; i++) 
      {
        for (j = 0; j < 9; j++) 
          {
            if (arreglo[i][j] == k) 
              {
                Numero = 1;
                break;
              }
        }
        if (Numero == 1) {
            break;
        }
    }

    if (Numero) 
    {
        printf("El valor %d se ha encontrado.\n", k);
    } 
    else 
    {
        printf("El Numero %d no se encontraba,estos eran los valores, prueba con otro.\n", k);
    }

    for (i = 0; i < 9; i++) 
      {
        for (j = 0; j < 9; j++) 
        {
            printf(" %d ", arreglo[i][j]);
        }
        printf("\n");
      }

    return 0;
}

