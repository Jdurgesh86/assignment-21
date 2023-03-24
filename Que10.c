/*Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/
#include<stdio.h>
struct Marks{
    int roll;
    char name[30];
    int chem;
    int math;
    int phy;
};

struct Marks input()
{
    struct Marks temp;
    printf("Enter the roll number ");
    scanf("%d",&temp.roll);
    printf("Enter the name of student ");
    fflush(stdin);
    fgets(temp.name,30,stdin);
    printf("Enter the chemistry math and physics marks ");
    scanf("%d%d%d",&temp.chem,&temp.math,&temp.phy);
    return temp;
}

void display(struct Marks temp)
{
    printf("\nThe student %s detail is as follows ",temp.name);
    float per= temp.chem+temp.phy+temp.math;
    per/=3;
    printf("The percentage of studnet %s is %.2f",temp.name,per);
}

int main()
{
    struct Marks M[5];
    for(int i=0;i<5;i++)
        M[i] = input();
    for(int i=0;i<5;i++)
        display(M[i]);
}