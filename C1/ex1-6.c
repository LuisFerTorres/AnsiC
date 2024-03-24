/*
Verifica que el valor de getchar() == EOF es 0 o 1
*/
#include <stdio.h>

int main(){
        int c;

//        if(-1 != EOF){
        if((c = getchar()) != EOF){
                printf("getchar() fue diferente a EOF");
        }
        else{
                //Osea fue -1
                printf("getchar() no fue diferente a EOF");
        }
}