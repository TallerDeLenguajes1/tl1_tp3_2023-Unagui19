/* 3) Escriba un programa que solicite 5 nombres, los cargue en un vector de punteros char y una
 vez cargados los liste por pantalla (Todo implementando reserva dinámica de memoria) (Lea
 las notas 1 y 2)
 
 5)Modifique el ejercicio nro 3 para que, en lugar de ingresar un número fijo de nombres, el
usuario pueda indicar previamente la cantidad de nombres que ingresará a continuación.*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int cantNombres;
    printf("Cantidad de nombres a ingresar: ");
    scanf("%d",&cantNombres);
    fflush(stdin);

    char **nombres;
    nombres=(char**) malloc(sizeof(char*) * cantNombres);

    char *Buff; //declaro variable auxiliar
    Buff=(char*) malloc(sizeof(char) * 100);   
    for (int i = 0; i < cantNombres; i++)//para cargar el vector nombres
    {
    printf("Ingrese el nombre numero %d\n\r",i+1);
    gets(Buff);
    nombres[i]=(char*) malloc((strlen(Buff)+1) * sizeof(char));
    strcpy(nombres[i],Buff);
    }

    printf("\nLos nombres cargados son: \n\r");

    for (int j = 0; j < cantNombres; j++)//para mostrar el vector nombres
    {
        puts(nombres[j]);
    }
    
    for (int j = 0; j < 5; j++)//para liberar la memoria reservada para el vector nombres
    {
        free(nombres[j]);
    }
    free(nombres);
    free(Buff);

    return 0;
}
