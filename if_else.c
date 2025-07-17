#include <stdio.h>
int main() {
    int a;
    int b;
    printf("hey user, enter the value of a: ");
    scanf("%d", &a);
    printf("hey user, enter the value of b: ");
    scanf("%d", &b);
    if (a > b) {
        printf("a is greater than b\n");
    } else if (a < b) {
        printf("b is greater than a\n");
    } else {
        printf("a is equal to b\n");
    }

 
    return 0;
}