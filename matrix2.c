#include <stdio.h>

int main() {
    int a[3][2],b[3][2],sum[3][2];
    int i,j;
    printf("enter the value for matrics 1\n");
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            scanf("%d \n",&a[i][j]);
        }
    }
    printf("enter the value for matrics 2\n");
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            scanf("%d \n",&b[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of both matrics is \n");
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}