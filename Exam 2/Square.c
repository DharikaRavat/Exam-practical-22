#include <stdio.h>


    int square(int num) {
    return num * num;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square of %d is: %d\n", n, square(n));

}
