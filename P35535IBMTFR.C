/*
NOMBRES: ISAAC FRANCISCO
APELLIDOS: BENÍTEZ MALQUÍN
NCR: 5535
*/

#include <stdio.h> //Librería estándar de entrada y salida
#include ".\librerias\Funciones.h.txt" //Librería de funciones recursivas
#include <string.h>

/*Función principal, la única que está presente en el código
por optimización.
*/
int main(){

    int opcion,numero; //Declaración de variables
    char cadena[100]; //Declaración del array cadena
    //Inicialización de las variables enteras, a fin de evitar que sucedan problemas con el almacenamiento de valores en la memoria asignada a las variables declaradas. 
    opcion = 0;
    numero = 0;
    
    do{

        printf("\n***************************\n");
        printf("\nDEBER MATEMATICAS DISCRETAS\n");
        printf("\n***************************\n"); //Sólo para decoración
        /*Las líneas de abajo indican las opciones del menú, con cada valor
        para dar a conocer al usuario las funcionalidades del programa. 
        */
        printf("Por favor, seleccione una opcion del menu\n");
        printf("1. Invertir una cadena\n");
        printf("2. Calcular el factorial\n");
        printf("3. Generar la sucesion de Fibonacci\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        //Limpiar el buffer de entrada
        /*
        Hacer esto sirve por si leímos un valor int, float, double y
        luego leemos un char, para evitar que "\n" lo interprete el
        scanf como la cadena o caracter
        */
       getchar();

        /*
        Ahora, empezamos con la sentencia Switch-case, la cual hace que
        si tenemos pocas opciones, podamos ordenarlas y llamarlas mediante una única
        variable, en este caso es int opcion. 
        */

        switch(opcion){
        
            //Caso 1: Función invierte strings.
            case 1:
                //Mensaje al ususario que ingrese una cadena
                printf("\nHola mundo, ingrese una cadena\n");

                //leer la cadena ingresada por el user
                fgets(cadena, sizeof(cadena), stdin);
                //Función fgets, consultar

                //Imprimir string
                printf("\nLa cadena ingresada por el ususario es %s", cadena);
                invertirString(cadena,0, strlen(cadena)-1);
                //Imprimir string al revés
                printf("\nLa cadena invertida es %s\n", cadena);
                break;
            //Caso 2: La función de factorial.	
            case 2:
                printf("Ingrese un numero positivo entero: "); //Pide al usuario un numero para iniciar
                scanf("%d", &numero); //Escaneamos el numero
                printf("\nEl factorial del numero %d es %d\n", numero, factorial(numero));
                /*
                Mediante la función factorial() llamamos
                de la librería local la función, indicando la
                variable que deseamos calcular su factorial.
                */
                break;
            //Caso 3: Función de Fibonacci.
            case 3:
                printf("\nIngrese un numero entero positivo: ");
                scanf("%d", &numero);
                printf("\nLa sucesion de Fibonacci hasta %d es:\n", numero);
                /*
                Usamos el bucle for para poder generar la cantidad necesaria
                de números para que la función fibonacci(), importada de la
                librería local funcione, el bucle for va desde 0 hasta que
                i sea menor al número ingresado por el usuario.
                */
                for(int i=0; i<numero; i++){ 
                    printf("%d", fibonacci(i));
                }
                printf("\n");
                break;
            //Caso 4: Cierre del programa
            case 4:
                printf("Saliendo del programa.\n");
                printf("Programa finalizado."); //En caso de querer finalizar, mediante la opción 4 se hace
                break;
            default:
                printf("Opcion invalida. Intente de nuevo..\n"); //En caso de no ingresar un valor correcto, saldrá este mensaje en la consola
            break;
        }
    }while(opcion != 4); //Con el bucle do-while se valida si reiniciar el programa o finalizarlo, si el usuario computa la opción 4.

    return 0; //Valor obligatorio de retorno en funciones int.

}