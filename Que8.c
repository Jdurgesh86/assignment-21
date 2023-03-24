#include <stdio.h>
struct student 
{
    int roll;
    char name[50];
    float per;
};

struct student  input()
{
     struct student  temp;
    printf("Enter the student roll ");
    scanf("%d",&temp.roll);
    printf("Enter the student name ");
    scanf("%s",temp.name);
    printf("Enter the student percentage ");
    scanf("%f",&temp.per);
    return temp;
}

void Display(struct student  temp)
{
    printf("\nstudent roll is %d",temp.roll);
    printf("\nstudent name is %s",temp.name);
    printf("\nstudent percentage is %.2f",temp.per);
}
int main()
{
    struct  student S[10];
    for(int i=0;i<10;i++)
        S[i]=input();
    for(int i=0;i<10;i++)
    {
        printf("\n\n");
        Display(S[i]);
    }
}