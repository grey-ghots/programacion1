#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
int main() {
   
    int a = 10, b = 5, c = 3, d = 2, y = 4;
    float x = 6.0, z = 8.0, R6, R7;

    // ============================
    // Ejercicio 6:
    // x = (a - (c / (x - y*2 + z)) - x) / (b + d)
    // ============================
    R6 = ( (float)(a - (c / (x - y * 2 + z)) - x) ) / (float)(b + d);
 
    printf("\nResultado ejercicio 6 = %f\n", R6);

    // ============================
    // Ejercicio 7:
    // x = ( z / ( (a / (b + c)) - 1 ) ) + (4*x)/(a+b) - 8
    // ============================
    R7 = ( (float)z / ( (float)a / (float)(b + c) - 1 ) ) 
         + ( (float)4 * x ) / (float)(a + b) - 8;

    printf("Resultado ejercicio 7 = %f\n", R7);

    getch();
    return 0;