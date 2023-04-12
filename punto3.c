/* 3) Escriba un programa que solicite 5 nombres, los cargue en un vector de punteros char y una
 vez cargados los liste por pantalla (Todo implementando reserva dinámica de memoria) (Lea
 las notas 1 y 2)*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main()
{
    char *Buff; //declaro variable auxiliar
    char *nombres[5];

    Buff=(char*) malloc(sizeof(char) * 100);   

    for (int i = 0; i < 5; i++)//para cargar el vector nombres
    {
    printf("Ingrese el nombre numero %d\n\r",i+1);
    gets(Buff);
    nombres[i]=(char*) malloc((strlen(Buff)+1) * sizeof(char));
    strcpy(nombres[i],Buff);
    }

    printf("\nLos nombres cargados son: \n\r");

    for (int j = 0; j < 5; j++)//para mostrar el vector nombres
    {
        puts(nombres[j]);
    }
    
    for (int j = 0; j < 5; j++)//para liberar la memoria reservada para el vector nombres
    {
        free(nombres[j]);
    }

    free(Buff);

    return 0;
}