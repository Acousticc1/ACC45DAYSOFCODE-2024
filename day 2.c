#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N, X;
        scanf("%d %d", &N, &X);
        int min_subscriptions = (N + 5) / 6;
        int min_total_cost = min_subscriptions * X;
        printf("%d\n", min_total_cost);
    }

    return 0;
}`