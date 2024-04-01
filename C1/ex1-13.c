#include <stdio.h>
#define MAX_LEN 15

int main(){
        int c;
        int len = 0;
        int len_past_max = 0;
        int total_palabras = 0;
        int frecuenciasLongitudPalabras[MAX_LEN];

        //Inicializando el arreglo
        for(int i = 0; i < MAX_LEN; i++){
                frecuenciasLongitudPalabras[i] = 0;
        }

        while((c = getchar())){
                // Si es un WS contarlo como la palabra de longitud 0
                if(c == ' ' || c == '\t' || c == '\n' || c == EOF){
                        if(len >= MAX_LEN){
                                len_past_max++;
                        }
                        else if(len != 0){
                                frecuenciasLongitudPalabras[len]++;
                        }

                        len = 0;

                        if(c == EOF){
                                break;
                        }

                        frecuenciasLongitudPalabras[0]++;
                }
                // Sino contar su longitud
                else{
                        len++;
                }
        }

        //Imprimiendo las frecuencias
        putchar('\n');
        printf("%-15s | %15s\n", "Longitud", "Frecuencia");

        //Una linea
        for(int i = 0; i < 30 + 3; i++){
                putchar('-');
        }
        putchar('\n');

        //Contenido de la tabla
        for(int i = 0; i < MAX_LEN; i++){
                printf("%-15d | %15d\n", i, frecuenciasLongitudPalabras[i]);
        }
        printf("%-15s | %15d\n", "14+", len_past_max);
        
        //Una linea
        for(int i = 0; i < 30 + 3; i++){
                putchar('-');
        }
        putchar('\n');

        //Total de palabras
        for(int i = 1; i < MAX_LEN; i++){
                total_palabras += frecuenciasLongitudPalabras[i];
        }
        total_palabras += len_past_max;
        printf("%-15s | %15d\n", "Total", total_palabras);
}