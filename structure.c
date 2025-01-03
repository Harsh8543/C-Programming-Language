#include<stdio.h>
struct employee
{
    int emp_code;
    char emp_name[50];
    char designation[60];
    float salary;
};
int main()
{
struct employee a;
printf("\n enter the employee code");
scanf("\n%d",&a.emp_code);
printf("\nenter the employee name");
gets(a.emp_name);
printf("\n enter the employee designation");
gets(a.designation);
printf("\nenter the amount of the salary");
scanf("%f\n",&a.salary);

printf("\n%d",a.emp_code);
puts(a.emp_name);
puts(a.designation);
printf("%f\n",a.salary);
return 0;
}



