#include <stdio.h>
#include<string.h>

struct Employee
{
    int id;
    float salary;
    char name[50];
};

int main()
{
    struct Employee E1;
    printf("Enter the employee id ");
    scanf("%d",&E1.id);
    printf("Enter the employee name ");
    scanf("%s",E1.name);
    printf("Enter the employee salaray ");
    scanf("%f",&E1.salary);

    printf("\nEmplyee id is %d",E1.id);
    printf("\nEmployee name is %s",E1.name);
    printf("\nEmployee salary is %.2f",E1.salary);
}