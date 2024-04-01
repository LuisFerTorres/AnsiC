#include <stdio.h>
#define ASCII_SZ        128

int main(){
        int frecuenciaCaracter[ASCII_SZ];
        int c;

        // Inicializando las frecuencias en 0
        for(int i = 0; i < ASCII_SZ; i++){
                frecuenciaCaracter[i] = 0;
        }

        // Entrada hasta EOF
        while((c = getchar()) != EOF){
                frecuenciaCaracter[c]++;
        }
        putchar('\n');

        // Imprimiendo la frecuencia de cada caracter
        printf("%-15s | %-15s | %-15s\n", "No.", "Caracter", "Frecuencia");

        //Una linea
        for(int i = 0; i < 45 + 6; i++){
                putchar('-');
        }
        putchar('\n');

        //Contenido de la tabla
        for(int i = 33; i < ASCII_SZ; i++){
                printf("%-15d | %-15c | %15d\n", i, i, frecuenciaCaracter[i]);
        }
}