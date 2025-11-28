#include <stdio.h>
#include <string.h>

struct Forecast {
    char color[20];
    int luckyNumber;
    char advice[100];
};

struct User {
    char name[30];
    int day, month;
    char zodiac[20];
};

void assignZodiac(struct User *u) {
    int d = u->day, m = u->month;

    if ((d >= 21 && m == 3) || (d <= 19 && m == 4)) strcpy(u->zodiac, "Aries");
    else if ((d >= 20 && m == 4) || (d <= 20 && m == 5)) strcpy(u->zodiac, "Taurus");
    else strcpy(u->zodiac, "Other");  // simplified for lab
}

void displayUser(struct User u, struct Forecast f[]) {
    int i;
    printf("\nUser: %s\nZodiac: %s\n", u.name, u.zodiac);

    for (i = 0; i < 12; i++) {
        if (strcmp(u.zodiac, "Aries") == 0) {
            printf("Lucky Color: %s\n", f[0].color);
            printf("Lucky Number: %d\n", f[0].luckyNumber);
            printf("Advice: %s\n", f[0].advice);
            return;
        }
    }
}

int main() {
    int n, i;

    struct Forecast f[12] = {
        {"Red", 7, "Be confident today!"}, // Aries
        {"Green", 4, "Stay calm."}         // Taurus (others omitted)
    };

    printf("Enter number of users: ");
    scanf("%d", &n);

    struct User u[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", u[i].name);
        printf("Enter birth day: ");
        scanf("%d", &u[i].day);
        printf("Enter birth month: ");
        scanf("%d", &u[i].month);

        assignZodiac(&u[i]);
    }

    printf("\nDisplaying Horoscope:\n");
    for (i = 0; i < n; i++) {
        displayUser(u[i], f);
    }

    return 0;
}
