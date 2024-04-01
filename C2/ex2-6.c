/*
 * 
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <limits.h>

typedef unsigned long long u64;
typedef signed char i8;
typedef int i32;
typedef long i64;
// typedef long long i64;

void printBinary(uint64_t n);
u64 getbits(long x, int p, int n);

int main(){
        uint64_t x = ~(~0U >> 1);
        int p = 32;
        int n = 32;
        int_fast64_t hola;

        printf("El numero original es \n");
        printf("Base 10: %-64llu\n", x);
        printf("Base  2: ");
        printBinary(x);
        printf("\n");

        printf("getbits(x, p, n)\n");
        printf("Base 10 : %-64llu\n", getbits(x, p, n));
        printf("Base  2 : ");
        printBinary(getbits(x, p, n));
        printf("\n");

        printf("sizeof long %lu\n", sizeof(long));
        printf("sizeof long long %lu\n", sizeof(long long));
        printf("sizeof schar %lu\n", sizeof(signed char));
        printf("max unsigned long %-64lu\n", ULONG_MAX);
        printf("max unsigned long long %-64llu\n", ULLONG_MAX);
        ULONG_MAX == ULLONG_MAX ? printf("si") : printf("no");
}

//PrintsInline
void printBinary(uint64_t n) {
        if(n > 1){
                printBinary(n >> 1);
        }
        printf("%llu", n & 1);
}

uint64_t getbits(long x, int p, int n){
        return (x >> (p + 1 - n)) & ~(~0ULL << n);
}
