#include <stdio.h>
#include <stdlib.h>

int funcion_moda(int v[], int moda, int rep,int num,int j,int n);
int funcion_llamada_moda (int v[],int n);

int main ()
{
    int n=8;
    int v[8] = {1,1,3,3,3,3,5,5};
    printf("Moda: %i\n",funcion_llamada_moda(v,n));
    return 0;
}

int funcion_llamada_moda (int v[],int n)
{
    return funcion_moda(v,v[0],1,v[0],0,n-1);
}

int funcion_moda(int v[], int moda, int rep,int num,int j,int n)
{
    if(n < 0) return moda;
    if(num != v[n])
    {
        if(j > rep) return funcion_moda(v,num,j,v[n],1,n-1);
        else funcion_moda(v,moda,rep,v[n],1,n-1);
    }
    else
    {
        j++;
        if(j > rep) return funcion_moda(v,num,j,num,j,n-1);
        else return funcion_moda(v,moda,rep,num,j,n-1);
    }
}