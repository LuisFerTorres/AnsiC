/*
 * Recibe un programa de C
 * Remueve los comentarios
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
        int c;
        bool slashFound = false;
        bool insideSingleLineComment = false;

        while((c = getchar()) != EOF){
                if(insideSingleLineComment){
                        
                }
                
                if(slashFound){
                        if(c == '/'){
                                insideSingleLineComment = true;
                        }
                        else{
                                slashFound = false;
                                putchar('/');
                                putchar(c);
                        }
                }

                if(slashFound = c == '/'){
                        continue;
                }
        }
}