#include <stdio.h>
#include <stdlib.h>

int i_cifra(int num,int i);

int main ()
{
    int num;
    int cifra;
    printf("Introduce un numero: ");
    scanf("%d",&num);
    printf("Introduce la cifra: ");
    scanf("%d",&cifra);
    printf("Cifra = %i\n",i_cifra(num,cifra));
    return 0;
}

int i_cifra(int num,int i)
{
    if(i-1==0) return num%10;
    else return i_cifra(num/10,i-1);
}