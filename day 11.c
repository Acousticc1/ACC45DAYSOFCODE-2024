#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}