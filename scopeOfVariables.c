#include <stdio.h>

int globalVar = 100;

void demoFunction() {

    int localVar = 50;

    printf("\nInside demoFunction:\n");
    printf("  Local variable (localVar) = %d\n", localVar);
    printf("  Global variable (globalVar) = %d\n", globalVar);

    localVar++;
    globalVar++;

    printf("  After changes:\n");
    printf("  Local variable (localVar) = %d\n", localVar);
    printf("  Global variable (globalVar) = %d\n", globalVar);
}

int main() {
    printf("Local vs Global Variables in C\n");

    printf("\nIn main (before function call):\n");
    printf("  Global variable (globalVar) = %d\n", globalVar);

    demoFunction();
    demoFunction(); 

    printf("\nBack in main (after function calls):\n");
    printf("  Global variable (globalVar) = %d\n", globalVar);

    return 0;
}
