#include <stdio.h>

struct Gift {
    char name[30];
    char type[30];
    float price;
    int quantity;
};

int main() {
    int i;
    float priceLimit;
    int qtyLimit;

    struct Gift g[3];

    for (i = 0; i < 3; i++) {
        printf("\nEnter details for gift %d\n", i + 1);
        printf("Name: ");
        scanf("%s", g[i].name);
        printf("Type: ");
        scanf("%s", g[i].type);
        printf("Price: ");
        scanf("%f", &g[i].price);
        printf("Quantity: ");
        scanf("%d", &g[i].quantity);
    }

    printf("\nEnter price limit: ");
    scanf("%f", &priceLimit);

    printf("\nGifts above price %.2f:\n", priceLimit);
    for (i = 0; i < 3; i++) {
        if (g[i].price > priceLimit)
            printf("%s (%.2f)\n", g[i].name, g[i].price);
    }

    printf("\nEnter quantity limit: ");
    scanf("%d", &qtyLimit);

    printf("\nGifts with quantity above %d:\n", qtyLimit);
    for (i = 0; i < 3; i++) {
        if (g[i].quantity > qtyLimit)
            printf("%s (%d)\n", g[i].name, g[i].quantity);
    }
}
