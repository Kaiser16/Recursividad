#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prod_escalar(int v1[],int v2[],int n);

int main ()
{
    int n = 5;//Logitud del vector
    int v1[5] = {1,2,3,6,7};//Vector 1 inicializados
    int v2[5] = {3,4,8,2,3};//Vector 2 inicializados
    printf("Producto escalar: %i\n",prod_escalar(v1,v2,n));//Imprime por pantalla el resultado del producto escalar
    return 0;
}


//cabecera: int prod_escalar(int v1[],int v2[],int n)
//precondicion: Recibe dos vectores inicializados de misma longitud y su longitud
//postcondicion: devuelve el producto escalar de ambos vectores
int prod_escalar(int v1[],int v2[],int n)
{
    if((n-1)<0) return 0;//Caso base, ambos vectores ya no tienen mas elementos, por lo que se devuelve el elemento neutro de la suma
    else 
    {
        //Recursiva no final
        return v1[n-1]*v2[n-1] + prod_escalar(v1,v2,n-1);//Si aun quedan elementos en el vector, se multiplica el elemento n-1 de v1 por elelemento n-1 de v2 y se vuelve a llamar a la funcion con n-1
    }
}