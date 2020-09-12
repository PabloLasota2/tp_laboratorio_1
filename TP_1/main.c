#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "calculos.h"

int main()
{
    int operador1;
    int operador2;
    char confirm = 's';
    int opcionMenu;

    do
    {
        system("cls");
        printf("Ingrese un numero para operar: ");
        scanf("%d",&operador1);
        printf("Ingrese otro numero para operar: ");
        scanf("%d",&operador2);


        printf("\n\n\n*** �Que desea hacer con los numeros? ***\n\n"
               "1- Suma\n"
               "2- Resta\n"
               "3- Division\n"
               "4- Producto\n"
               "5- Factorial de ambos numeros\n"
               "6- Todas las opciones\n"
               "0- Salir\n\n"
               "Opcion: ");
        scanf("%d",&opcionMenu);
        system("cls");

        switch(opcionMenu)
        {
        case 1:
            printf("El resultado de %d+%d es: %d\n",operador1, operador2, suma(operador1,operador2));
            break;
        case 2:
            printf("El resultado de %d-%d es: %d\n",operador1, operador2, resta(operador1,operador2));
            break;
        case 3:
            if(operador2 == 0)
            {
                printf("No es posible dividir por 0. Intente nuevamente\n");
            }
            else
            {
                printf("El resultado de %d/%d es: %.2f\n",operador1, operador2, division(operador1,operador2));
            }
            break;
        case 4:
            printf("El reusltado de %d*%d es: %d\n",operador1, operador2, multiplicacion(operador1,operador2));
            break;
        case 5:
            printf("El factorial de %d es: %d y el factorial de %d es: %d\n", operador1,factorial(operador1), operador2, factorial(operador2));
            break;
        case 6:
            if(operador2 == 0)
            {
                printf("No es posible dividir por 0. Intente nuevamente\n");
            }
            else
            {
                printf("El resultado de %d+%d es: %d\n",operador1, operador2, suma(operador1,operador2));
                printf("El resultado de %d-%d es: %d\n",operador1, operador2, resta(operador1,operador2));
                printf("El resultado de %d/%d es: %.2f\n",operador1, operador2, division(operador1,operador2));
                printf("El reusltado de %d*%d es: %d\n",operador1, operador2, multiplicacion(operador1,operador2));
                printf("El factorial de %d es: %d y el factorial de %d es: %d\n", operador1,factorial(operador1), operador2, factorial(operador2));
            }
            break;
        default:
            printf("%d no es una opcion. Intente nueva mente\n\n",opcionMenu);
            break;
        }
        system("pause");
        system("cls");
        printf("Reiniciar programa?s/n\n");
        confirm = tolower(getch());
    }
    while(confirm == 's');

    system("cls");
    printf("Programa finalizado!\n\n");

    return 0;
}
