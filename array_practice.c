#include<stdio.h>
struct student{
    int id;
    int marks;
    char fav_char;
    
}manoj,shubham;

int main()
{
    printf("the id of manoj is %d",manoj.id);
    manoj.id=1;
    manoj.marks=250;
    manoj.fav_char='g';
    shubham.id=9;
    shubham.marks=900;
    shubham.fav_char='h';
    printf("The id of manoj is %d",manoj.id);
    printf("The total marks of manoj is %d",manoj.marks);
    printf("The fav char of manoj is %c",manoj.fav_char);
    printf("The id of shubham is %d",manoj.id);
    printf("The marks of shubham is %d",manoj.marks);
    printf("The fav_char of shubham is %c",manoj.fav_char);
    



 return 0;
}




#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a ");
    scanf("%d",&a);
    int * address = &a;
    printf("the address of address id %p",&address);
    Printf("the address of  a is %p",address);
    printf("the actual value of a is %d",a);
 return 0;
}




#include<stdio.h>
#include<string.h>
int main()
struct student{
    int id;
    int marks;
    char name[50];

};
{
   struct student a,b;
    a.id=1;
    a.marks=89;
    a.name="suryansh";
    b.id=2;
    b.marks=90;
    b.name="manoj";

 return 0;
}



#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6}};
    int b[3][3]={{1,2,3},{4,5,6}};
    int sum[2][2];

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
        sum[i][j]=a[i][j] + b[i][j];
        }
    }
    printf("sum of matrics");
    
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
        printf("%d",sum[i][j]);
        }
    }
    printf("\n")


 return 0;
}


