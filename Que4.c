//Write a function to find the highest salary employee from a given array of 10 employees.
#include<stdio.h>
#include<limits.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee input()
{
    struct Employee temp;                                      
    printf("Enter the employee id \n");
    scanf("%d",&temp.id);
    printf("Enter the employee name \n");
    fflush(stdin);
    fgets(temp.name,50,stdin);
    printf("Enter the employee salary \n");
    scanf("%f",&temp.salary);
    return temp;
}

void Display(struct Employee temp)
{
    printf("Emplyee id is %d\n",temp.id);
    printf("Employee name is %s\n",temp.name);
    printf("Employee salary is %.2f\n",temp.salary);
}

int main()
{
    struct Employee E[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter employee details for %d employee \n",i+1);
        E[i]=input();
    }
    int max=INT_MIN,edetail;
    for(int i=0;i<10;i++)
    {
        if(E[i].salary>max)
        {
            max=E[i].salary;
            edetail=i;
        }
    }
    printf("The highest salary of the employee is \n");
    Display(E[edetail]);
}
