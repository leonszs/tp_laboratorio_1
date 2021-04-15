/*
 * operaciones.c
 *
 *  Created on: 10 abr. 2021
 *      Author: Tukic
 */
#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"



int sumar(int a,int b){
int resultado;

resultado = a + b;

return resultado;

}




int restar(int a, int b){
int resultado;

resultado = a - b;

return resultado;
}




float dividir(int a, int b){
float resultado;

resultado = (float)a / b;

return resultado;
}




int multiplicar(int a, int b){
int resultado;

resultado = a*b;

return resultado;
}



int factorial(int a)
{

   int resultado;

    if (a == 0)
        {
             resultado = 1;
        }

    else
    {
        resultado = a* factorial(a-1);
    }
    return resultado;
}
