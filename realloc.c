#include <stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    int n;
    int i;
    printf("Enter how many value you want to store in this Array :\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for (i=0;i<n;i++){
        printf("enter the value of %d in this array:\n",i);
        scanf("%d",&ptr[i]);

    };
    for (i=0;i<n;i++){
        printf("The value at %d position is %d\n",i,ptr[i]);
    }
    printf("now i am going to change the size of pointer with the help of realloc function\n");
    ptr=(int *)realloc(ptr,3*sizeof(int)) ;

    for (i=1;i<3;i++){
        printf("enter the value of %d in this array:\n",i);
        scanf("%d",&ptr[i]);

    };
    for (i=0;i<n;i++){
        printf("The value at %d position is %d\n",i,ptr[i]);
    }

    return 0;
}