#include <stdio.h>

int sumRec(int a[], int n) {
    if (n == 0) return 0;
    return a[n - 1] + sumRec(a, n - 1);
}

int main() {
    int teams, rounds, i, j, threshold;

    printf("Enter number of teams: ");
    scanf("%d", &teams);

    printf("Enter rounds per team: ");
    scanf("%d", &rounds);

    int scores[teams][rounds];

    for (i = 0; i < teams; i++) {
        printf("\nTeam %d scores:\n", i + 1);
        for (j = 0; j < rounds; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    printf("\nEnter score threshold: ");
    scanf("%d", &threshold);

    for (i = 0; i < teams; i++) {
        int total = sumRec(scores[i], rounds);
        printf("Team %d total: %d", i + 1, total);

        if (total > threshold)
            printf(" (Above threshold)");
        
        printf("\n");
    }
}
