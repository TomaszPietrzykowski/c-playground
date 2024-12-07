#include <stdio.h>
#include <stdbool.h>

int main() {

    char grade = 'A';           // single character, format specifier: %c
    char name[] = "Selene";     // array of characters, format specifier: %s

    printf("Her name is %s and her average grade is %c\n", name, grade);

    // 3.1415926535897932384626433832
    float pi = 3.141592;                // 4 bytes (32 bits of precision) 6 - 7 digits, format specifier: %f
    double pi_prec = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits, format specifier: %lf

    printf("Pi calculation improved from %f to %lf\n", pi, pi_prec); 
    // printf rounds to 6 decimals by default, specify precision:
    printf("Pi calculation improved from %0.15f to %0.15lf\n", pi, pi_prec);
    // float loses precision after 6 decimals:
    // Pi calculation improved from 3.141592025756836 to 3.141592653589793

    bool e = true; // 1 byte, format specifier: %d

    char b = 100;   // 1 byte (-128 to 127) - char can be displayed using two format specifiers: %d will display a number (between -127 and 127),
                    // %c will display a character specified by integer in ASCII table:

    printf("output is %d\n", b); // output is 100
    printf("output is %c\n", b); // output is d

    unsigned char uns = 253;     // 1 byte (0 to 255)
    
    // short integers:
    short int si = 31567;                // 2 bytes (-32,768 to 32,767), format specifier %d
    unsigned short int usi = 64567;      // 2 bytes (0 to 65,535), format specifier %d

    // shorts can be declared without "int":
    short sis = 31567;                // 2 bytes (-32,768 to 32,767), format specifier %d
    unsigned short usis = 64567;      // 2 bytes (0 to 65,535), format specifier %d

    // regular (long) integers - "long" omitted in declaration, use int/unsigned int
    int j = 2147483640;                // 4 bytes (-2,147,483,648 to 2,147,648,647), format specifier %d
    unsigned int uj = 4294967295;      // 4 bytes (0 to 4,294,967,295), format specifier %u

    // long (long long) integers:
    long long int llj = 9223372036854775807;                // 8 bytes (-9 quintillion to 9 quintillion), format specifier %lld
    unsigned long long int ullj = 18446744073709551615;     // 8 bytes (0 to 18 quintillion), format specifier %lu
    // to avoid warning: integer constant is so large that it is unsigned
    // explcitly mark the value as unsigned by adding "U" suffix:
    unsigned long long int ullj = 18446744073709551615U;

    
    // exeeding the maximum value will cause the number to overflow and "wrap-up" to minimum, 
    // eg. int variable with value 2,147,648,648 will wrap back into it's minimum -2,147,483,648

    int toomuch = 2147483648; 
    printf("integer overflow: %d", toomuch);

    return 0;
}