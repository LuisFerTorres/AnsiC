/*
 * Elimina las ocurrencias de
 * s2 en s1
*/

#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(){
        char s1[] = "hola mundx";
        char s2[] = "mundx";
 
        char s3[] = "hola mundo";
        char s4[] = "xxx";

        char s5[] = "-----uuuu..---..-hola mundo";
        char s6[] = "-.u";

        squeeze(s1, s2);
        squeeze(s3, s4);
        squeeze(s5, s6);

        printf("%s\n", s1);
        printf("%s\n", s3);
        printf("%s\n", s5);
}

void squeeze(char s1[], char s2[]){
        int i, j, k = 0; 
        
        //itera por los elementos que queremos eliminar
        for(i = 0; s2[i] != '\0'; i++){
                k = 0;

                //itera por la cadena de donde queremos quitar los elementos
                for(j = 0; s1[j] != '\0'; j++){
                        if(s1[j] != s2[i]){
                                s1[k++] = s1[j];
                        }
                }        
                s1[k] = '\0';
        }
}