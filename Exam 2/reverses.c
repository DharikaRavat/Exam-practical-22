#include <stdio.h>

int main() {
	
	int i;
    int a[] = {1, 5, 7, 3, 2, 9};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Reversed Array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

}
