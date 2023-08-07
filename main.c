#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "AdivinaN.h"


int main()
{
    int op=menu();

    int numero=0,numIng,intentos,gano;

    while(op!=0)
    {
        numero=iniciarNumero(op);
        gano=false;
        intentos=3;

        system("cls");
        printf("Ingrese un numero entre 1 y %d\n", op==1?10:op==2?25:100);
        do{
            printf("\n---> ");
            scanf("%d",&numIng);

            if(numIng==numero)
            {
                gano=true;
                printf("Felicidades, GANASTES!!\n");
            }
            else if(numIng<numero)
            {
                printf("El numero es mayor al ingresado\n");
                intentos--;
            }
            else
            {
                printf("El numero es menor al ingresado\n");
                intentos--;
            }
        }while(intentos!=0 && !gano);

        printf("\nEl numero era el --> %d\n",numero);
        system("pause");
        system("cls");
        op=menu();
    }

    printf("\nPrograma finalizado, ADIOS!!\n");
    return 0;
}
