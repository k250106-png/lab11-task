#include <stdio.h>

void countdown(int n) {
    if (n < 0) return;
    printf("%d ", n);
    countdown(n - 1);
}

int main() {
    int events, days, i;

    printf("Enter number of events: ");
    scanf("%d", &events);

    for (i = 1; i <= events; i++) {
        printf("\nEnter days left for event %d: ", i);
        scanf("%d", &days);

        printf("Countdown: ");
        countdown(days);
        printf("\n");
    }
}
