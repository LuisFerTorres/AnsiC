/*
 * Remueve los espacios en blancos de las cadenas ingresadas
*/

#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 10

int mygetline(char buffer[], int maxline);
bool isBlank(char c);

int main(){
        // Sin ocupar un buffer 
        /* 
        int c;

        while((c = getchar()) != EOF){
                if(c != ' ' && c != '\n' && c != '\t'){
                        putchar(c);
                } 
        }
        */

       //Con un buffer
        char line[MAXLINE];
        int len;

        while((len = mygetline(line, MAXLINE)) > 0){
                printf("Line with no blanks: %s\n", line);
        }
}

//My getline with no blanks
int mygetline(char buffer[], int maxline){
        int c, i;

        for(i = 0;(c = getchar()) != EOF && c != '\n'; i++){
                if(isBlank(c)){
                        i--;
                        continue;
                }
                else if(i < maxline - 1){
                        buffer[i] = c;
                }
        }

        if(i >= maxline - 1){
                buffer[maxline - 1] = '\0';
        }
        else{
                buffer[i] = '\0';
        }

        return i;
}

bool isBlank(char c){
        return c == ' ' || c == '\n' || c == '\t'; 
}