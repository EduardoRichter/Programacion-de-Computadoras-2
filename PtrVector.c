#include <stdio.h>
#define SIZE 5
float suma1(float[], int);
float suma2(float *, int);

int main()
{

    float precios[SIZE] = {20.4, 34.5, 12.3, 98.4};
    printf("Suma1 = %.1f\n", suma1(precios, SIZE));
    printf("Suma2 = %.1f\n", suma2(precios, SIZE));

    return 0;
}

float suma1(float vector[], int cant)
{
    int i;
    float suma = 0.0;
    for (i = 0; i < cant; i++)
    {
        suma += vector[i];
    }
    return (suma);
}

float suma2(float *puntero, int cant)
{

    int i;
    float suma = 0.0;
    for (i = 0; i < cant; i++)
    {
       // suma += *puntero; // Suma siempre a la posicion donde apunta puntero que es la posicion 0 del vector
       // suma += *(puntero + i);// Suma los valores a los que apunta el puntero incrementado en i
      // suma += puntero[i];// Suma los valores a los que apunta puntero en el indice i
      suma += *puntero++; // Suma los valores apuntados por puntero 
    }
    return (suma);
}