/*
 * Consigue el mismo comportamiento
 * De la funcion mygetline
 * Sin && o ||
*/

#include <stdio.h>
#define MAXLINE 10
int mygetline(char buffer[], const int lim);

int main(){
        int len;
        char buffer[MAXLINE];

        while((len = mygetline(buffer, MAXLINE)) > 0){
                printf("Line was: %s\n", buffer);
        }
}

int mygetline(char buffer[], const int lim){
        int c, i;

        //Linea original
        //for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        
        //Produce warning
        // for(i = 0; (i < lim - 1) + ((c = getchar()) != EOF) + (c != '\n'); i++)
        // {
        //         buffer[i] = c;
        // }

        for(i = 0;; i++){
                if(((c = getchar()) != EOF)){
                        if(c != '\n'){
                                if(i < lim - 1) buffer[i] = c;
                        }
                        else break;
                }
                else{
                        break;
                }
        }

        buffer[i] = '\0';

        return i;
}