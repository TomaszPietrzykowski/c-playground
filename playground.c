#include <stdio.h>

int main() {

    char grade = 'A';           // single character, format specifier: %c
    char name[] = "Selene";     // array of characters, format specifier: %s

    printf("Her name is %s and her average grade is %c", name, grade);

    // 3.1415926535897932384626433832
    float pi = 3.141592;                // 4 bytes (32 bits of precision) 6 - 7 digits, format specifier: %f
    double pi_prec = 3.141592653589793; // 8 bytes (32 bits of precision) 15 - 16 digits, format specifier: %lf

    printf("Pi calculation improved from %f to %lf\n", pi, pi_prec); 
    // printf rounds to 6 decimals by default, specify precision:
    printf("Pi calculation improved from %0.15f to %0.15lf", pi, pi_prec);
    // float loses precision after 6 decimals:
    // Pi calculation improved from 3.141592025756836 to 3.141592653589793

    return 0;
}