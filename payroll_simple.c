#include <stdio.h>

int main() {
    int id;
    char name[50];
    float basic, da, hra, pf, gross, net;

    printf("===== PAYROLL SYSTEM =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    da = basic * 0.10;
    hra = basic * 0.20;
    pf = basic * 0.12;

    gross = basic + da + hra;
    net = gross - pf;

    printf("\n===== SALARY REPORT =====\n");
    printf("Employee ID: %d\n", id);
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("DA: %.2f\n", da);
    printf("HRA: %.2f\n", hra);
    printf("PF: %.2f\n", pf);
    printf("Gross Salary: %.2f\n", gross);
    printf("Net Salary: %.2f\n", net);

    return 0;
}
