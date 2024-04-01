/*
        Programa del libro
        Modificado para que imprima la longitud real de la linea mas larga
        Respetando el tamaño del buffer
        (Claro el limite es 2147 millones de caracteres de longitud)
*/

#include <stdio.h>
#define MAXLINE         10

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
        //data
        int len;
        int max = 0;
        char line[MAXLINE];
        char longest[MAXLINE];

        //text 
        while((len = mygetline(line, MAXLINE)) > 0){
                if(len > max){
                        max = len;
                        copy(longest, line);
                }
        }

        if(max > 0){
                printf("\nLongest line was: \n");
                printf("%s\n", longest);
                printf("Len was: %d\n", max);
        }
}

int mygetline(char line[], int maxline){
       int c, i;

        /*
        for(i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++){
                line[i] = c;
        }
        */

        /*
        if(c == '\n'){
                line[i] = c;
                i++;
        }
        */

        for(i = 0;(c = getchar()) != EOF && c != '\n'; i++){ 
                if(i < maxline - 1){
                        line[i] = c;
                }         
        }


        line[i] = '\0';
        return i; 
}

void copy(char to[], char from[]){
        int i = 0;

        while((to[i] = from[i]) != '\0'){
                i++;
        }
}