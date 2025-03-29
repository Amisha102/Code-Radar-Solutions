#include <stdio.h>
int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code.
    }
    for (int i = N; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}