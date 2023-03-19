#include <stdio.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee input()
{
    struct Employee temp;
    printf("Enter the employee id ");
    scanf("%d",&temp.id);
    printf("Enter the employee name ");
    scanf("%s",temp.name);
    printf("Enter the employee salaray ");
    scanf("%f",&temp.salary);
    return temp;
}

int main()
{
    struct Employee E1;
    E1=input();
}