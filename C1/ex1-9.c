/*
Imprime lo que se introduzca
Solo no dejes que haya dos espacios consecutivos
*/

#include <stdio.h>

int main(){
        int c;
        int previous = 'a';

        while((c = getchar()) != EOF){
                // equivalente
                // if(!(previous != ' ' || c != ' '))
                if(previous == ' ' && c == ' '){
                        // printf("No imprimiendo nada\n");
                }
                else{ 
                        putchar(c);
                }
                previous = c;
        }
}