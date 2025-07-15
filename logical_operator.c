#include <stdio.h>
int main() {
  int a;
  int b;
  int c;
    printf("Hey, enter the value of a\n");
    scanf("%d", &a);
    printf("Hey, now enter the value of b\n");
    scanf("%d", &b);
    printf("Hey, now enter the value of c\n");
    scanf("%d", &c);
  if (a>b &&  a>c){printf("a is greater than b and  c\n");}
  else if (b>a && b>c){printf("b is greater than a and c\n");}
  else if (c>a && c>b){printf("c is greater than a and b\n");}
 return 0;
}