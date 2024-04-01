/*
 * Regresa el indice donde un caracter de s2
 * sucede en s1
 * si no existe, -1
*/

#include <stdio.h>

int any(const char s1[], const char s2[]);

int main(){
        char s0[] = "hola mundo";
        char s1[] = "xxx";

        int index = any(s0, s1);

        printf("Index found at: %d", index);
}

int any(const char s1[], const char s2[]){
        int i, j;
        
        for(i = 0; s2[i] != '\0'; i++){
                for(j = 0; s1[j] != '\0'; j++){
                        if(s1[j] == s2[i]){
                                return j;
                        }
                }
        }

        return -1;
}