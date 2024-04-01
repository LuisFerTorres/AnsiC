#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
        //Titulo
        printf("Alcance de tipos enteros\n");

        //Encabezado
        printf("%-25s | %25s\n", "Tipo", "Alcance");

        //Una linea
        for(size_t i = 0; i < 50 + 3; i++){
                putchar('-');
        }
        putchar('\n');

        //Contenido de tabla
        printf("%-25s | %25d\n", "Int max", INT_MAX); 
        printf("%-25s | %25d\n", "Int min", INT_MIN); 
        
        printf("%-25s | %25d\n", "Short max", SHRT_MAX);
        printf("%-25s | %25d\n", "Short min", SHRT_MIN);
        
        printf("%-25s | %25ld\n", "Long max", LONG_MAX);
        printf("%-25s | %25ld\n", "Long min", LONG_MIN);
        
        printf("%-25s | %25lld\n", "Long long max", LLONG_MAX);
        printf("%-25s | %25lld\n", "Long long min", LLONG_MIN);
        
        printf("%-25s | %25u\n", "Unsigned Int max", UINT_MAX);
        
        printf("%-25s | %25lu\n", "Unsigned Long max", ULONG_MAX);
 
        printf("%-25s | %25llu\n", "Unsigned Long Long max", ULLONG_MAX);

        //Titulo
        printf("\n");
        printf("Alcance de tipo punto flotante\n");

        //Encabezado
        printf("%-25s | %25s\n", "Tipo", "Alcance");

        //Una linea
        for(size_t i = 0; i < 50 + 3; i++){
                putchar('-');
        }
        putchar('\n');

        //Contenido de tabla
        printf("%-25s | %25g\n", "Float max", FLT_MAX); 
        printf("%-25s | %25g\n", "Float min", FLT_MIN); 
 
        printf("%-25s | %25g\n", "Double max", DBL_MAX); 
        printf("%-25s | %25g\n", "Double min", DBL_MIN);

        printf("%-25s | %25Lg\n", "Long Double max", LDBL_MAX); 
        printf("%-25s | %25Lg\n", "Long Double min", LDBL_MIN);
}