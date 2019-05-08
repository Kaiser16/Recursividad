#include <stdio.h>
#include <stdlib.h>

int funcion_repeticiones(int v[], int rep,int num,int j,int n);
int funcion_llamada_repeticiones(int v[],int n);

int main ()
{
    int n=8;
    int v[8] = {1,2,4,4,4,4,4,5};
    printf("Repeticiones: %i\n",funcion_llamada_repeticiones(v,n));
    return 0;
}

int funcion_llamada_repeticiones (int v[],int n)
{
    return funcion_repeticiones(v,1,v[0],0,n-1);
}

int funcion_repeticiones(int v[], int rep,int num,int j,int n)
{
    if(n < 0) return rep;
    if(num != v[n])
    {
        if(j > rep) return funcion_repeticiones(v,j,v[n],1,n-1);
        else funcion_repeticiones(v,rep,v[n],1,n-1);
    }
    else
    {
        j++;
        if(j > rep) return funcion_repeticiones(v,j,num,j,n-1);
        else return funcion_repeticiones(v,rep,num,j,n-1);
    }
}