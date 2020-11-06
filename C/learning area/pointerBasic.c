#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x = 20;
    int *PtrX = &x;

    *PtrX = 100;
    printf("x = %d\n", x);

    return EXIT_SUCCESS;
}