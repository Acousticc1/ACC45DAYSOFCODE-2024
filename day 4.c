#include <stdio.h>

int main() {
    int A, B, C, X;

    // Read the input values
    scanf("%d %d %d %d", &A, &B, &C, &X);

    // Check if X is equal to A, B, or C
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}