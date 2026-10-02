#include <stdio.h>
#include <math.h>

int main() {
    int maxScore, achievedScore;
    float percentage;

    printf("Enter max score: ");
    scanf("%d", &maxScore);

    printf("Enter score achieved: ");
    scanf("%d", &achievedScore);

    percentage = ((float)achievedScore / maxScore) * 100;

    printf("You scored %.0f%%\n", percentage);

    return 0;
}



