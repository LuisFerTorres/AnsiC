/*
Imprime los caracteres especiales
*/

#include <stdio.h>

int main(){
        int c;

        while((c = getchar()) != EOF){
                switch(c){
                case '\n':
                        printf("\\n");
                        putchar('\n');
                        break;
                case '\t':
                        printf("\\t");
                        break;
                case '\b':
                        printf("\\b");
                        break;
                case '\\':
                        printf("\\");
                        break;
                case ' ':
                        putchar('_');
                        break;
                default:
                        putchar(c);
                        break;
                }
        }
}