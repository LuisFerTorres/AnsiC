//Convierte de Fahrenheit a Celsius
//300 a 0

#include <stdio.h>
#define FROM    300
#define TO      0
#define STEP    20

int main(){
        float fahrenheit, celsius;

        printf("Fahrenheit a Celsius\n\n");
        for(fahrenheit = FROM; fahrenheit >= TO; fahrenheit -= STEP){
                celsius = 5 * fahrenheit / 9 + 32;
                printf("%6.2f \t %6.2f\n", fahrenheit, celsius);
        }
}
