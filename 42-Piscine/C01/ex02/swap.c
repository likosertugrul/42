#include <stdio.h>
 void swap(int *a, int *b)
 {
    int temp;

    temp = *a;  // geçici değer içine a atadık a içine b en sonda bnin içine geçici 
    *a = *b;    // değer yani ayı atadık
    *b = temp;
 }

 int main(void)
 {
    int x = 42;
    int y = 84;

    swap(&x, &y);
    printf("x = %d, y = %d", x, y);
 }