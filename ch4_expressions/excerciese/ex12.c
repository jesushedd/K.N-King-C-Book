#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    //a
    i =5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);


    //c
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);

    // d

    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);



    return 0;
}
