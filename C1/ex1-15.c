#include <stdio.h>
#define FROM    0
#define TO      300
#define STEP    20

// Prototipo de las funciones
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main(){
        // data
        int i;

        // text
        printf("Conversion de Fahrenheit a Celsius\n\n");

        // Titulo de tabla
        printf("%10s | %10s\n", "Fahrenheit", "Celsius");

        //Una linea
        for(i = 0; i < 20 + 3; i++){
                putchar('-');
        }
        putchar('\n');

        //Contenido de la tabla
        for(i = FROM; i <= TO; i += STEP){
                printf("%10d | %10.2f\n", i, fahrenheitToCelsius(i));
        }
 
        //Una linea
        for(i = 0; i < 20 + 3; i++ ){
                putchar('-');
        }
        putchar('\n');

        // Titulo de tabla 
        printf("%10s | %10s\n", "Celsius", "Fahrenheit");
 
        //Una linea
        for(i = 0; i < 20 + 3; i++){
                putchar('-');
        }
        putchar('\n');
 
        //Contenido de la tabla
        for(i = FROM; i <= TO; i += STEP){
                printf("%10d | %10.2f\n", i, celsiusToFahrenheit(i));
        }
 
        //Una linea
        for(i = 0; i < 20 + 3; i++){
                putchar('-');
        }
        putchar('\n');
}

// Definiciones
float celsiusToFahrenheit(float celsius){
        float fahrenheit = celsius * 9 / 5 + 32 ;

        return fahrenheit;
}

float fahrenheitToCelsius(float fahrenheit){
        float celsius = 5 * (fahrenheit - 32) / 9;

        return celsius;
}