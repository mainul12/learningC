#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    scanf("%d", &size);
    int *ptr = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("the elements are %d\n", ptr[i]);
    }
    free(ptr);
    return 0;
    
}