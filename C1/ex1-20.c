/*
 * Emula el comportamiento de tab
*/

#include <stdio.h>
#define TAB_STOP 8

int main(){
        int c;
        int spaces;
        unsigned int column = 1;

        while((c = getchar()) != EOF){
                if(c != '\t'){
                        putchar(c);
                        column++;
                        if(c == '\n') column = 1;
                }
                else{
                        spaces = TAB_STOP - (column - 1) % TAB_STOP;

                        for(int i = 0; i < spaces; i++){
                                putchar(' ');
                                column++;
                        }
                }

        }
}