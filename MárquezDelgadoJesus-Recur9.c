#include <stdio.h>
#include <stdlib.h>

int llamada_parejas(int v[],int n);
int parejas(int v[],int n,int j,int k,int cont);
int sumatorio (int v[],int i,int n,int sum);

int main ()
{
    int n = 10;
    int v[10] = {1,2,3,4,5,1,8,3,9,4};
    int j,k;
    printf("\n Parejas: %i\n",llamada_parejas(v,n));
    return 0;
}

//cabecera: int llamada_parejas(int v[],int n)
//precondicion: Recibe el vector de enteros inicializados y numero de elementos del vector
//postcondicion: Devuelve el resultado de parejas
int llamada_parejas(int v[],int n){ return parejas(v,n-1,0,0,0); }

//cabecera: int parejas(int v[],int n,int j,int k,int cont)
//precondicion: Recibe el vector de enteros inicializado y los parametros inicializados de la funcion llamada
//postcondicion: Devuelve el numero de parejas cuyo sumatorio es igual en ambos intervalos
int parejas(int v[],int n,int j,int k,int cont)
{
    if(j > n) return cont;
    else if(k > n) return parejas(v,n,j+1,0,cont);
    else if(sumatorio(v,0,j,0) == sumatorio(v,k,n,0)) 
    {
        printf("\n (%i,%i) %i = %i \n",j,k,sumatorio(v,0,j,0),sumatorio(v,k,n,0));
        return parejas(v,n,j,k+1,cont+1);
    }
    else return parejas(v,n,j,k+1,cont);
}

//cabecera: int sumatorio (int v[],int i,int n,int sum)
//precondicion: Recibe el vector inicializado, el principio del sumatorio y el fin dentro del vector y un entero sum igual a 0
//postcondicion: Devuelve el sumatorio en el intervalo entre i y n
int sumatorio (int v[],int i,int n,int sum)
{
    if(i > n) return sum;
    else return sumatorio(v,i+1,n,sum+v[i]);
}