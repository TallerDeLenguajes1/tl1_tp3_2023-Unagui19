#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void cargarMatriz(int matriz[5][12]);
void mostrarMatriz(int matriz[5][12]);
void promedioGanancias(int matriz[5][12]);
void maximo(int matriz[5][12]);
void minimo(int matriz[5][12]);


int main ()
{
    int produccion[5][12];
    cargarMatriz(produccion);    
    mostrarMatriz(produccion);
    printf("\n");
    promedioGanancias(produccion);
    maximo(produccion);
    minimo(produccion);




    return 0;
}

void cargarMatriz(int matriz[5][12]){
    // int num;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            matriz[i][j]=10000 + rand()%50001;
        }
        
    }
    
}



void mostrarMatriz(int matriz[5][12]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            printf("%4d\t",matriz[i][j]);
        }
        printf("\r\n");
    }
}


void promedioGanancias(int matriz[5][12])
{
    int suma=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            suma+=matriz[i][j];
        }
        printf("Anio %d: %d\n",i+1,suma/12);
        suma=0;
    }
    
}
void maximo(int matriz[5][12]){
    int aux=0,k=0,l=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (matriz[i][j]>=aux)
            {
                aux=matriz[i][j];
                k=i+1;
                l=j+1;
            }
        }
    }

    printf("La maxima ganacia fue de $%d el mes %d en el anio numero %d\n\r",aux,l,k);


}
void minimo(int matriz[5][12]){
        int aux=matriz[1][1],k=0,l=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (matriz[i][j]<=aux)
            {
                aux=matriz[i][j];
                k=i;
                l=j;
            }
        }
    }

    printf("La minima ganacia fue de $%d el mes %d en el anio numero %d\n\r",aux,l,k);

}
