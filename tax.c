#include <stdio.h>

int main(int argc, char const *argv[])
{
    float income, tax_perc; 
    float fix_tax;
    float exedent;
    //enter tex income
    printf("Enter taxable income: ");
    scanf("%d", &income);
    // set fix tax
    //set perct tax over
    if (income < 750)
    {
        tax_perc = 1;
        fix_tax = 0;
    }
    else if (income < 2250)
    {
        tax_perc = 2;
        fix_tax = 7.5;
    }
    else if (income < 3750)
    {
        tax_perc = 1;
        fix_tax = 0;
    }

    
    
    return 0;
}
