#include <stdio.h>
#include <stdlib.h>
/*
 1≤i≤(n/2)−1: A[i]>A[2∗i] ∧ A[i]>A[2∗i+1]
*/

int llamada_sumatorio (int v[],int n);
int sumatorio (int v[],int n,int i,int sum);

int main ()
{
    int n = 8;
    int v[8] = {20,8,2,3,200,1,2,1};
    printf("Sumatorio: %i\n",llamada_sumatorio(v,n));
    return 0;
}

int llamada_sumatorio (int v[],int n) { return sumatorio(v,n,0,0);}

int sumatorio (int v[],int n,int i,int sum)
{
    if(i > ((n/2)-1)) return sum;
    else if (v[i] > v[(i*2)])
    {
        if(v[i] > v[(2*i)+1]) 
        {
            return sumatorio(v,n,i+1,sum+v[i]);
        }
    }
    return sumatorio(v,n,i+1,sum);
}