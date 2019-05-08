#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float llamada_prod_escalar(float v1[],float v2[],int n);
float prod_escalar(float v1[],float v2[],int n,float num1,float num2);

int main ()
{
    float v1[2] = {1,2};
    float v2[2] = {3,4};
    int n = 2;
    printf("Producto escalar: %f\n",llamada_prod_escalar(v1,v2,n));
    return 0;
}

float llamada_prod_escalar(float v1[],float v2[],int n)
{
    return prod_escalar(v1,v2,n,0,0);
}

float prod_escalar(float v1[],float v2[],int n,float num1,float num2)
{
    if(n-1 < 0) return (sqrt(num1)*sqrt(num2));
    else 
    {
        n--;
        prod_escalar(v1,v2,n,num1+pow(v1[n],2),num2+pow(v2[n],2));
    }
}