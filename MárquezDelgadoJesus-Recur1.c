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


//llamada: int funcion_llamada_moda (int v[],int n)
//precondicion: Recibe un vector de n enteros inicializados y n 
//postcondicion: Devuelve el numero que mas se repite
int funcion_llamada_moda (int v[],int n) { return funcion_moda(v,v[0],1,v[0],0,n-1); }

//llamada: int int funcion_moda(int v[], int moda, int rep,int num,int j,int n)
//precondicion: Recibe el vector y los parametros inicializados
//postcondicion: Devuelve el numero que mas se repite (moda)
int funcion_moda(int v[], int moda, int rep,int num,int j,int n)
{
    if(n < 0) return moda;
    else if(num != v[n])//Si el entero num es distinto del sigueinte en el vector
    {
        if(j > rep) return funcion_moda(v,num,j,v[n],1,n-1);//Si se repite mas veces que la moda se cambia la moda por el entero num y sus repeticiones j
        else funcion_moda(v,moda,rep,v[n],1,n-1);// Pasa al siguiente numero
    }
    else //si el proximo numero es igual que elactual
    {
        j++;
        if(j > rep) return funcion_moda(v,num,j,num,j,n-1);
        else return funcion_moda(v,moda,rep,num,j,n-1);
    }
}