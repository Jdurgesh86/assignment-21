#include<stdio.h>

struct employee{
    int id;
    char name[30];
    float salary;
};

struct employee input()
{
    struct employee temp;
    printf("Enter Employee id ");
    scanf("%d",&temp.id);
    printf("Enter Employee name ");
    fflush(stdin);
    fgets(temp.name,30,stdin);
    printf("Enter Employee salary ");
    scanf("%f",&temp.salary);
    return temp;
}


void Display(struct employee temp)
{
    printf("Emplyee id is %d\n",temp.id);
    printf("Employee name is %s\n",temp.name);
    printf("Employee salary is %.2f\n",temp.salary);
}

int main()
{
    struct employee E[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter employee details for %d employee \n",i+1);
        E[i]=input();
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(E[i].salary>E[j].salary)
            {
                struct employee temp;
                temp=E[i];
                E[i]=E[j];
                E[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        Display(E[i]);
        printf("/n");
    }
}