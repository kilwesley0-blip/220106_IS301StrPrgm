#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inFile, *outFile;
    char empNo[10], dept[10], exempt[5];
    float payRate;
    int hoursWorked;
    float basePay;

    // Open input file
    inFile = fopen("employee.txt", "r");
    if (inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }

    // Open output file
    outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL) {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    // Discard header line from input
    char header[200];
    fgets(header, sizeof(header), inFile);

    // Write header to output
    fprintf(outFile, "%-12s %-10s %-10s %-8s %-12s %-10s\n",
            "EmployeeNo", "Department", "PayRate", "Exempt", "HoursWorked", "BasePay");

    // Read employee records
    while (fscanf(inFile, "%s %s %f %s %d", empNo, dept, &payRate, exempt, &hoursWorked) == 5) {
        basePay = payRate * hoursWorked;
        fprintf(outFile, "%-12s %-10s %-10.2f %-8s %-12d %-10.2f\n",
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");
    return 0;
}
