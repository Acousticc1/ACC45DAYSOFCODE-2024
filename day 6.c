#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        // Scenario 1: Solve A first, then B
        int pointsAfterA = 500 - 2 * X;
        int totalTimeAfterA = X; // Total time after completing A
        int pointsAfterB = 1000 - 4 * (totalTimeAfterA + Y);
        int scoreAB = pointsAfterA + pointsAfterB;
        
        // Scenario 2: Solve B first, then A
        pointsAfterB = 1000 - 4 * Y;
        int totalTimeAfterB = Y; // Total time after completing B
        pointsAfterA = 500 - 2 * (totalTimeAfterB + X);
        int scoreBA = pointsAfterB + pointsAfterA;
        
        // Print the maximum of the two scores
        printf("%d\n", scoreAB > scoreBA ? scoreAB : scoreBA);
    }
    
    return 0;
}