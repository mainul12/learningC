//malloc
#include <stdio.h>
#include <stdlib.h>

int main(){

int size;

scanf("%d", &size);

int *ptr = (int*)malloc(sizeof(int) * size); //this is the key of the whole code

// OR int *ptr = new int[size]; //C++

printf("Enter the elements : ");

for (int i = 0 ; i < size ; i++)

scanf("%d", &ptr[i]);

printf("Enter the elements : ");

for (int i = 0 ; i < size ; i++)

//sum = sum + ptr[i];

printf("sum of all elements = %d \n",ptr[i]);

free(ptr);

}
