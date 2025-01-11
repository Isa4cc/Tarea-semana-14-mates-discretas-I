    /*
    NOMBRES
    GRUPO 5535
    el usuario ingresa una cadena y la invertimos
    */

#include <stdio.h>
#include <string.h>

void invertirString(char cadena[100], int inicio, int fin)
{
    if(inicio>=fin){
        return;
    }
    int temp = cadena[inicio];
    cadena[inicio] = cadena[fin];
    cadena[fin] = temp;
    invertirString(cadena, inicio+1, fin-1);
    
    return 0;
}

int main(){

    char cadena[10];
    
    //Mensaje al ususario que ingrese una cadena
    printf("\nHola mundo, ingrese una cadena\n");

    //leer la cadena ingresada por el user
    fgets(cadena, sizeof(cadena), stdin);
    //Función fgets, consultar

    //Imprimir string
    printf("\nLa cadena ingresada por el ususario es %s", cadena);
    invertirString(cadena,0, strlen(cadena)-1);
    //Imprimir string al revés
    printf("La cadena invertida es %s", cadena);


    return 0;
}