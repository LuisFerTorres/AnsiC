/*
Cuenta espacios, tabs o nuevas lineas
*/

#include <stdio.h>

int main(){
        int c;
        int newlines, tabs, spaces; 
        newlines = tabs = spaces = 0; 

        //Lee hasta encontrar EOF
        while((c = getchar()) != EOF){
                if(c == ' '){
                        spaces++;
                }
                else if(c == '\n'){
                        newlines++;
                }
                else if(c == '\t'){
                        tabs++;
                }
        }

        printf("Las cuentas fueron\n");
        printf("Newlines: %d\n", newlines);
        printf("Spaces: %d\n", spaces);
        printf("Tabs: %d\n", tabs);
}