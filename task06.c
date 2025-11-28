#include <stdio.h>

struct Item {
    char name[30];
    char category[30];
    int quantity;
};

int main() {
    int n, i, minQty;
    char catSearch[30];

    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];
    struct Item *ptr = items;

    for (i = 0; i < n; i++) {
        printf("\nItem %d name: ", i + 1);
        scanf("%s", (ptr + i)->name);

        printf("Category: ");
        scanf("%s", (ptr + i)->category);

        printf("Quantity: ");
        scanf("%d", &(ptr + i)->quantity);
    }

    printf("\nEnter category to search: ");
    scanf("%s", catSearch);

    printf("\nItems in category '%s':\n", catSearch);
    for (i = 0; i < n; i++) {
        if (strcmp((ptr + i)->category, catSearch) == 0)
            printf("%s (%d)\n", (ptr + i)->name, (ptr + i)->quantity);
    }

    printf("\nEnter minimum quantity: ");
    scanf("%d", &minQty);

    printf("\nItems with quantity >= %d:\n", minQty);
    for (i = 0; i < n; i++) {
        if ((ptr + i)->quantity >= minQty)
            printf("%s (%d)\n", (ptr + i)->name, (ptr + i)->quantity);
    }
}
