#include <stdio.h>

int main(void){
    //a)
    int i, j, k ;
    i = 2 ; j = 3;
    k = i * j == 6;
    printf("%d\n", k);
    // 1 true
    
    //b)
    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j);
    //1 true

    //c)
    i = 3; j = 2; k = 1;
    printf("%d\n", i < j == j < k);
    // 1 true

    //d)
    i = 3; j = 4; k = 5;
    printf("%d\n", i % j + i < k);
    // 0 false


}