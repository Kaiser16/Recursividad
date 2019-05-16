#include <stdio.h>
#include <stdlib.h>

int llamada_parejas(int v[],int n);
int parejas(int v[],int n,int i,int j,int cont);

int main ()
{
    int n = 10;
    int v[10] = {1,2,3,4,5,1,8,3,9,4};
    printf("Parejas: %i\n",llamada_parejas(v,n));
    return 0;
}

int llamada_parejas(int v[],int n){ return parejas(v,n,0,1,0); }

int parejas(int v[],int n,int i,int j,int cont)
{
    if(i >= n) return cont;
    else if(j > n) return parejas(v,n,i+1,i+2,cont);
    else if(v[i] == v[j]) 
    {
        printf("v[%i] (%i) = v[%i] (%i)\n",i,v[i],j,v[j]);
        return parejas(v,n,i,j+1,cont+1);
    }
    else return parejas(v,n,i,j+1,cont);
}