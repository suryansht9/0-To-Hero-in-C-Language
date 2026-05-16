#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[15];
    int id;
    float cgpa;
} stud;
int main()
{
    stud s1,s2;
    strcpy(s1.name, "shivansh");
    strcpy(s2.name, "suryansh");
    s1.id = 90;
    s2.id = 99;
    s1.cgpa = 9.2;
    s2.cgpa = 9.4;
    printf("NAME OF STUDENT WHO GOT 9.2 CGPA IS :%s\n", s1.name);
    printf("id of s1 is: %d\n", s1.id);
    printf("the CGPA got by ", s1.name, "is%s\n", s1.cgpa);
    printf("NAME OF STUDENT WHO GOT 9.4 CGPA IS :%s\n", s2.name);
    printf("id of s2 is: %d\n", s2.id);
    printf("the CGPA is got by ", s2.name, "is%S\n", s2.cgpa);
    return 0;
}