/*  Problem: Customer bill for a company
    Algorithm: 1-Start
               2-Initialize unit prices for each product
               3-Input quantities of each product from the user
               4-Calculate total price for each item
               5-Calculate subtotal
               6-Calculate tax
               7-Calculate grand total
               8-Display formatted bill
               9-End
    Developed by: Wesley Kil
    Date: 3/3/2026

*/

#include <stdio.h>

int main() {
    // Unit prices
    float priceTV = 400.0, priceMonitor = 220.0, priceFlash = 35.20;
    float priceHardDrive = 150.0, pricePrinter = 300.0;
    int qtyTV, qtyMonitor, qtyFlash, qtyHardDrive, qtyPrinter;

    // Input quantities
    printf("Enter number of TVs sold: ");
    scanf("%d", &qtyTV);
    printf("Enter number of Monitors sold: ");
    scanf("%d", &qtyMonitor);
    printf("Enter number of Flash Drives sold: ");
    scanf("%d", &qtyFlash);
    printf("Enter number of Hard Drives sold: ");
    scanf("%d", &qtyHardDrive);
    printf("Enter number of DeskJet Printers sold: ");
    scanf("%d", &qtyPrinter);

    // Calculate totals
    float totalTV = qtyTV * priceTV;
    float totalMonitor = qtyMonitor * priceMonitor;
    float totalFlash = qtyFlash * priceFlash;
    float totalHardDrive = qtyHardDrive * priceHardDrive;
    float totalPrinter = qtyPrinter * pricePrinter;

    float subtotal = totalTV + totalMonitor + totalFlash + totalHardDrive + totalPrinter;
    float tax = subtotal * 0.0835;
    float total = subtotal + tax;

    // Output formatted bill
    printf("\n---------------------------------------------\n");
    printf("QTY   Description        Unit Price   Total\n");
    printf("---------------------------------------------\n");
    printf("%-5d %-15s %10.2f %10.2f\n", qtyTV, "TV", priceTV, totalTV);
    printf("%-5d %-15s %10.2f %10.2f\n", qtyMonitor, "Monitor", priceMonitor, totalMonitor);
    printf("%-5d %-15s %10.2f %10.2f\n", qtyFlash, "Flash Drive", priceFlash, totalFlash);
    printf("%-5d %-15s %10.2f %10.2f\n", qtyHardDrive, "Hard Drive", priceHardDrive, totalHardDrive);
    printf("%-5d %-15s %10.2f %10.2f\n", qtyPrinter, "Printer", pricePrinter, totalPrinter);
    printf("---------------------------------------------\n");
    printf("Subtotal: %33.2f\n", subtotal);
    printf("Tax (8.35%%): %31.2f\n", tax);
    printf("Total: %35.2f\n", total);
    printf("---------------------------------------------\n");

    return 0;
}
