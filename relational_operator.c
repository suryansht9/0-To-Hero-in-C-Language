#include <stdio.h>

int main() {
    int a, b;

    printf("Hey, enter the value of a\n"); 
    scanf("%d", &a);

    printf("Hey, now enter the value of b\n");
    scanf("%d", &b);

    if (a < b) {
        printf("a is less than b\n");
    }
    else if (a > b) {
        printf("a is greater than b\n");
    }
    else if (a == b) {
        printf("a is equal to b\n");
    }
    else {
        printf("invalid input\n");
    }

    return 0;
}
