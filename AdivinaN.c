#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "AdivinaN.h"

void msgIni()
{
    printf("\n*******************************\n");
    printf("*        \\--WELCOME!!--/      *\n");
    printf("*         \\   O    O  /       *\n");
    printf("*          \\    ^    /        *\n");
    printf("*           \\  ___  /         *\n");
    printf("*           /       \\         *\n");
    printf("*          /         \\        *\n");
    printf("*******************************\n\n");

    system("pause");
}

int menu()
{
    int op;
    system("cls");
    do{
        printf("-------BIENVENIDO AL JUEGO DE ADIVINIAR EL NUMERO:-------\n\n");
        printf("REGLAS: Pensare en un numero entre los rangos indicados y tendras tres intentos para adivinarlo, buena suerte!!\n\n");
        printf("FACIL[1-10] --------> 1\n");
        printf("DIFICIL[1-25] ------> 2\n");
        printf("IMPOSIBLE[1-100] ---> 3\n");
        printf("SALIR --------------> 0\n");
        printf("Ingrese la opcion: ");
        scanf("%d", &op);

        if (op<0 || op>3)
            printf("Opcion no valida. Reingresar\n");
    }while(op<0 || op>3);
    return op;
}

int iniciarNumero(int op)
{
    int numero = op==1?10:op==2?25:100;
    return  rand() % (numero +1);
}


