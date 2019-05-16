#include <stdio.h>
#include <stdlib.h>

int llamada_cambios_tendencia(int v[],int n);
int cambios_tendencia(int v[],int n,int cont,int tend);

int main ()
{
    int n = 8;
    int v[8] = {1,2,3,20,12,11,14,8};
    printf("Cambios de tendencia: %i\n",llamada_cambios_tendencia(v,n));
    return 0;
}

int llamada_cambios_tendencia(int v[],int n) {return cambios_tendencia(v,n-1,0,0);}

int cambios_tendencia(int v[],int n,int cont,int tend)
{
    if(n < 0) return cont;
    else if(tend == 1)
    {
        if(v[n-1] < v[n]) return cambios_tendencia(v,n-1,cont+1,-1);
        else return cambios_tendencia(v,n-1,cont,tend);
    }
    else if(tend == -1)
    {
        if(v[n-1] > v[n]) return cambios_tendencia(v,n-1,cont+1,1);
        else return cambios_tendencia(v,n-1,cont,tend);
    }
    else if(tend == 0)
    {
        if(v[n-1] < v[n]) return cambios_tendencia(v,n-1,cont,-1);
        else if(v[n-1] > v[n]) return cambios_tendencia(v,n-1,cont,1);
    }
}