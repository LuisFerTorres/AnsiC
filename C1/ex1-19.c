/*
 * Invierte el orden de las cadenas ingresadas
*/

#include <stdio.h>
#define MAXLINE 10

int mygetline(char buffer[], int maxline);
void reverse(char line[], int size);

int main(){
        char buffer[MAXLINE];
        int len;

        while((len = mygetline(buffer, MAXLINE)) > 0){
                printf("Line was: %s\n", buffer);

                // Estructura necesaria para saber cuantas entradas invertir
                // Sin -1 el caracter nulo se mueve al inicio
                if(len <= MAXLINE){
                        reverse(buffer, len - 1);
                }
                else{
                        reverse(buffer, MAXLINE - 1);
                }
                printf("Line reversed: %s\n", buffer);

                putchar('\n');
        }
}

int mygetline(char buffer[], int maxline){
        int i, c;

        for(i = 0;(c = getchar()) != EOF && c != '\n'; i++){
                if(i < maxline - 1){
                        buffer[i] = c;
                }
        }

        if(i >= MAXLINE){
                buffer[maxline - 1] = '\0';
        }
        else{
                buffer[i] = '\0';
        }

        return i;
}

void reverse(char line[], int size){
        char aux;

        for(int i = 0; i < size / 2; i++){
                aux = line[i];
                line[i] = line[size - i - 1];
                line[size - i - 1] = aux; 
        }
}