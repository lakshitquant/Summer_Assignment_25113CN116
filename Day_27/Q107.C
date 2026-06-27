#include <stdio.h>

int main()
{
    int empId;
    float basic, hra, da, gross;

    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Calculate HRA and DA
    hra = basic * 0.20;
    da = basic * 0.10;

    // Calculate gross salary
    gross = basic + hra + da;

    // Display salary details
    printf("\n--- Salary Details ---\n");
    printf("Employee ID: %d\n", empId);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}