#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, Y; // number of working hours on each day from Monday to Thursday and Friday
        scanf("%d %d", &X, &Y);

        int total_hours = (X * 4) + Y; // calculate the total number of working hours in a week
        printf("%d\n", total_hours); // print the total number of working hours
    }

    return 0;
}