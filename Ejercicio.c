/*
 Escriba una función que reciba dos números 
enteros y los devuelva ordenados. Es decir que en 
el primer parámetro debe devolver el menor valor 
y en el 2do. el mayor.

 Utilice la función anterior para leer pares de 
valores e imprimirlos ordenados 
 */
#include <stdio.h>
#include <stdlib.h>

void enterosOrdenados(int *entero1, int *entero2);

int main(){

    int entero1, entero2;
    printf("Ingrese un numero ");
    scanf("%d",&entero1);
    printf("Ingrese otro numero ");
    scanf("%d",&entero2);

    enterosOrdenados(&entero1, &entero2);

    printf("El menor de los numeros es %i y el mayor de los numeros es % i\n", entero1, entero2);



    return 0;
}

void enterosOrdenados(int *entero1, int *entero2){

      if (*entero1 > *entero2)
      {
         int a= *entero1;
         *entero1 = *entero2;
         *entero2 = a;
         
      }
      

}