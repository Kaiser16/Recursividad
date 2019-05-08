#include <stdio.h>
#include <stdlib.h>

int minmax_llamada(int v[],int n);
int minmax(int v[],int n,int min,int max);

int main ()
{
    int n=8;
    int v[8] = {3,5,1,0,2,5,21,3};
    minmax_llamada(v,n);
    return 0;
}

int minmax_llamada(int v[],int n)
{
    return minmax(v,n-1,v[0],v[0]);
}

int minmax(int v[],int n,int min,int max)
{
    if(n==-1) printf(" Min: %i\n Max: %i\n",min,max);
    else if(v[n] > max) return minmax(v,n-1,min,v[n]);
    else if(v[n] < min) return minmax(v,n-1,v[n],max);
    else return minmax(v,n-1,min,max);
}