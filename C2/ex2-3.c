/*
 * htoi
 * Recibe una cadena de caracteres
 * interpretala como un decimal
 * conviertela a integer
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int htoi(const char h[], const int len);
bool isValidHexChar(char num);
bool isNumeric(const char num);
bool isAlphaHex(const char num);
char toLowercase(char letter);

int main(){
        char h0[] = "Ah";       //10
        int l0 = sizeof(h0) / sizeof(h0[0]) - 1;
        char h1[] = "0xA";      //10
        int l1 = sizeof(h1) / sizeof(h1[0]) - 1;
        char h2[] = "0XA";      //10 
        int l2 = sizeof(h2) / sizeof(h2[0]) - 1;
        char h3[] = "A";        //10
        int l3 = sizeof(h3) / sizeof(h3[0]) - 1;
        char h4[] = "-A";       //-10
        int l4 = sizeof(h4) / sizeof(h4[0]) - 1;
        char h5[] = "0xFFFFFF";
        int l5 = sizeof(h5) / sizeof(h5[0]) - 1;

        int i0 = htoi(h0, l0); 
        int i1 = htoi(h1, l1);
        int i2 = htoi(h2, l2);
        int i3 = htoi(h3, l3); 
        int i4 = htoi(h4, l4);
        int i5 = htoi(h5, l5);

        printf("%d\n", i0);
        printf("%d\n", i1);
        printf("%d\n", i2);
        printf("%d\n", i3);
        printf("%d\n", i4);
        printf("%d\n", i5);
}

int htoi(const char h[], int len){
        int num = 0;
        int i, j;
        bool isNegative = h[0] == '-';

        // if(h[0] == '-'){
        //         isNegative = true;
        // }

        if(h[len - 1] == 'h'){
                len--;
        }

        for(i = len - 1, j = 0; i >= 0; i--, j++){
                if(isValidHexChar(h[i])){
                        if(isNumeric(h[i])){
                                num += pow(16, j) * (h[i] - '0');
                        }
                        else{//es una letra
                                num += pow(16, j) * (toLowercase(h[i]) - 'a' + 10);
                        }
                }
                else if(toLowercase(h[i]) == 'x' || h[i] == '-'){
                        break;
                }
                else{
                        return 0;
                }

        }

        if(isNegative){
               num *= -1;
        }

        return num;
}

bool isValidHexChar(const char num){
        return isAlphaHex(num) || isNumeric(num);
}

bool isNumeric(const char num){
        return num >= '0' && num  <= '9';
}

bool isAlphaHex(const char num){
        return (num >= 'A' && num <= 'F') || (num >= 'a' && num <= 'f');
}

char toLowercase(char letter){
        if(letter >= 'A' && letter <= 'Z'){
                return letter + 'a' - 'A';
                // En la tabla ascii 
                // Hay 32 chars entre 'A' y 'a'
        }
        else{
                return letter;
        }
}