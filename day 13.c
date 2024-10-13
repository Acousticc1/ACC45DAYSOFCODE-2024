#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if ((double)Y / X >= 0.5) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}