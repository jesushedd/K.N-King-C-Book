#include <stdio.h>

int main(int argc, char const *argv[])
{
    int item_number;
    float unit_price;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy) :");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%d\n", item_number, unit_price, month, day, year);
    return 0;
}
