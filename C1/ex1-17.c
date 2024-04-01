/*
 * Imprime todas las cadenas que sean mas largas De 80 caracteres 
 * De 80 caracteres
*/

#include <stdio.h>
#define MAXLINE         1000
#define MINLINE         80 

// Getline del ejercicio anterior
int mygetline(char line[], int maxline);

int main(){
        int len;
        char buffer[MAXLINE];

        while((len = mygetline(buffer, MAXLINE)) > 0){
                if(len >= MINLINE){
                        printf("Line was: %s\n", buffer);
                }
                else{
                        printf("Line wasn't longer than %d chars\n", MINLINE);
                }
        }
}

int mygetline(char line[], int maxline){
        int c, i;

        for(i = 0; (c = getchar()) != EOF && c != '\n'; i++){
                if(i < maxline){
                        line[i] = c;
                }
        }

        // If i was bigger than maxline
        // line[i] would be segfault
        //line[i] = '\0';
 
        if(i >= maxline - 1){
                line[maxline - 1] = '\0';
        }
        else{
                line[i] = '\0';
        }
        return i;
}