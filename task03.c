#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    int daysPresent;
};

int totalAttendance(struct Employee e[], int n) {
    if (n == 0) return 0;
    return e[n - 1].daysPresent + totalAttendance(e, n - 1);
}

int main() {
    int n, minDays, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", e[i].name);
        printf("Enter ID: ");
        scanf("%d", &e[i].id);
        printf("Enter days present: ");
        scanf("%d", &e[i].daysPresent);
    }

    printf("\nMinimum required days: ");
    scanf("%d", &minDays);

    printf("\nEmployees with low attendance:\n");
    for (i = 0; i < n; i++) {
        if (e[i].daysPresent < minDays)
            printf("%s (ID: %d)\n", e[i].name, e[i].id);
    }

    int total = totalAttendance(e, n);
    printf("\nTotal attendance: %d\n", total);
}
