#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter first numbers: ");
    scanf("%d", &a);
    
    printf("Enter two numbers: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("swapping: a = %d, b = %d\n", a, b);
  
}
