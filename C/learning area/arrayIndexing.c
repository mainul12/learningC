#include <stdio.h>

int main(void){

char word[10] = "dump";
word[1] = 'a';
puts(word);
*(word + 1) = 'u';
puts(word);
return 0;
}