#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prod_escalar(int v1[],int v2[],int n);

int main ()
{
    int n = 5;
    int v1[5] = {1,2,3,6,7};
    int v2[5] = {3,4,8,2,3};
    printf("Producto escalar: %i\n",prod_escalar(v1,v2,n));
    return 0;
}

int prod_escalar(int v1[],int v2[],int n)
{
    if((n-1)<0) return 0;
    else 
    {
        return v1[n-1]*v2[n-1]+prod_escalar(v1,v2,n-1);
    }
}