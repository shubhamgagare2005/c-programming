#include <stdio.h>
int main()
 {
    int empId;
    char name[50];
    float basicSalary, da, hra, grossSalary, tax, netSalary;
     FILE *fp;

    fp = fopen("Result1.txt", "w");

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %d[^\n]", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter DA (Dearness Allowance): ");
    scanf("%f", &da);

    printf("Enter HRA (House Rent Allowance): ");
    scanf("%f", &hra);

    grossSalary = basicSalary + da + hra;
    tax = 0.10 * grossSalary;
    netSalary = grossSalary - tax;

    fprintf(fp,"\n--- Employee Salary Details ---\n");
    fprintf(fp,"Employee ID: %d\n", empId);
    fprintf(fp,"Employee Name: %s\n", name);
    fprintf(fp,"Basic Salary: %.2f\n", basicSalary);
    fprintf(fp,"DA: %.2f\n", da);
    fprintf(fp,"HRA: %.2f\n", hra);
    fprintf(fp,"Gross Salary: %.2f\n", grossSalary);
    fprintf(fp,"Tax Deducted (10%%): %.2f\n", tax);
    fprintf(fp,"Net Salary: %.2f\n", netSalary);

    return 0;
}
