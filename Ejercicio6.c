#include <stdio.h>
#include <stdlib.h>

int llamada_sumas_parejas(int v[],int n);
int sumas_parejas(int v[],int n,int i,int j,int k,int l);

int main ()
{
    int n = 8;
    int v[8] = {4,8,1,2,9,3,0,6};
    llamada_sumas_parejas(v,n);
    return 0;
}

int llamada_sumas_parejas(int v[],int n)
{
   return sumas_parejas(v,n,0,1,2,3);
}

int sumas_parejas(int v[],int n,int i,int j,int k,int l)
{
    if(j==n-1) return 0;
    else if((v[i]+v[j])==(v[k]+v[l])) printf("{%i+%i=%i - %i+%i=%i}\n",v[i],v[j],v[i]+v[j],v[k],v[l],v[k]+v[l]);
    if((l+1)==n) sumas_parejas(v,n,i+1,j+1,i+2,j+2);
    else sumas_parejas(v,n,i,j,k+1,l+1);
}