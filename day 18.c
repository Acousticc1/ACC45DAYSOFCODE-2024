#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        long long N;
        int A, B;
        scanf("%lld %d %d", &N, &A, &B);
        
    
        int rounds = log2(N);
    
        long long totalTime = rounds * A + (rounds - 1) * B;
        
    
        printf("%lld\n", totalTime);
    }
    
    return 0;
}