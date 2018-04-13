#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<conio.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numA;
    float numB;
    float resultado;



    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");


        scanf( "%d", &opcion);
        system("cls");
        switch(opcion)
        {
            case 1:
                printf("ingrese 1er operando: \n");
                 scanf("%f", &numA );

                break;
            case 2:
                printf("ingrese 2do operando: \n");
                 scanf("%f", &numB );

                break;
            case 3:
                resultado=suma(numA,numB);
                system("cls");
                printf("El resultado de la suma es: %f\n\n", resultado);

                break;
            case 4:
                resultado=resta(numA,numB);
                system("cls");
                printf("El resultado de la resta es: %f\n\n", resultado);

                break;
            case 5:
                if(numB==0)
                {
                    printf("No se puede realizar la division por cero, ingrese otro valor.");

                }
                else
                {

                resultado=division(numA,numB);

                printf("El resultado de la division es: %f\n\n", resultado);

                }

                break;
            case 6:
                resultado=multiplicacion(numA,numB);
                system("cls");
                printf("El resultado de la multiplicacion es: %f\n\n", resultado);

                break;
            case 7:
                resultado=factorial(numA);
                system("cls");
                printf("El resultado del factorial es: %f\n\n", resultado);

                break;
            case 8:
                resultado=suma(numA,numB);
                printf("El resultado de la suma es: %f\n\n", resultado);

                resultado=resta(numA,numB);
                printf("El resultado de la resta es: %f\n\n", resultado);

                if(numB==0)
                {
                    printf("No se puede realizar la division por cero, ingrese otro valor.");

                }
                else
                {

                resultado=division(numA,numB);
                printf("El resultado de la division es: %f\n\n", resultado);

                }
                resultado=multiplicacion(numA,numB);
                printf("El resultado de la multiplicacion es: %f\n\n", resultado);

                resultado=factorial(numA);
                printf("El resultado del factorial es: %f\n\n", resultado);

                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
