/*Computes the dimensional weight of a box from imput 
provided by the user*/
#include <stdio.h>

int main (void)
{
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);

    printf("Enter length of box: ");
    scanf("%d", &length);

    printf("Enter width of box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;
    
    //printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional wight (pounds) : %d\n", weight);
    
    return 0;

    
}