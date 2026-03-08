/*  Problem:
    Algorithm:
    Developed by: skerua_lab1.c
    Date:26-02-2026

*/

//your program statements goes here

#include <stdio.h>
#include <stdlib.h>


#define TV_PRICE 400.00
#define MONITOR_PTICE 220.00
#define FLASH_DRIVE_PRICE 150.00
#define HARD_DRIVE_PRICE 150.00
#define PRINTER_PRICE 300.00
#define TAX_RATE 0.0835



int main(){

    int tvQty , monitorQty , flashDriveQty , hardDriveQty , printerQty ;

    printf ("How Many TVs Were Sold?");
    scanf ("%d" , &tvQty) ;

    printf ("How Many Monitors Were Sold?") ;
    scanf ("%d" , &monitorQty) ;

    printf ("How Many Flash Drives Were Sold?") ;
    scanf ("%d" , &flashDriveQty) ;

    printf ("How Many Hard Drives Were Sold?") ;
    scanf ("%d" , &hardDriveQty) ;
     
    printf ("How Many Desktop Printers Were Sold?") ;
    scanf ("%d" , &printerQty) ;

    //Calculate total prices for each item

    double tvTotal = tvQty * TV_PRICE;
    double monitorTotal = monitorQty * MONITOR_PRICE ;
    double flashDriveTotal = flashDriveQty * FLASH_DRIVE_PRICE ;
    double hardDriveTotal =hardDriveQty * HARD_DRIVE_PRICE ;
    double printerTotal = printerQty *  PRINTER_PRICE ;

    //Calculate subtotal, tax and total
    double subtotal = tvTotal + monitorTotal + flashDriveTotal + hardDriveTotal + printerTotal ;
    double tax = subtotal * TAX RATE ;
    double total = subtotal + tax ;

    system ("cls") ; //clears screen

    //print the invoice
    printf("\nQTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n") ;
    printf ("------------------------------------------------\n")
    printf("%d\tTV\t\tK %.2f\tK % .2f\n" , tvQty, TV_PRICE, tvTotal);
    printf ("%d\tMonitor\t\tK %.2f\tK % .2f\n" , monitorQty, MONITOR_PTICE, monitorTotal) ;
    printf ("%d\tFlash Drive\tK %.2f\t\tK % .2f\n" , flashDriveQty ,  FLASH_DRIVE_PRICE , flashDriveTotal) ;
    printf ("%d\tHard Drive\tK %.2f\tK % .2f\n" , hardDriveQty, HARD_DRIVE_PRICE , hardDriveTotal ) ;
    printf ("%d\tDesktop Printer\tK %.2f\tK % .2f\n" , printerQty , PRINTER_PRICE, printerTotal) ;

    printf ("\t\t\t\t\t-------\n")
    printf ("\t\t\tSubtotal:\tk %.2f\n" , subtotal) ;
    printf ("\t\t\tTax:\t\tK %.2f\n" , tax) ;
    printf ("\t\t\tTotal: \t\tK %.2f\n" , total) ;
    printf ("---------------------------------------------------\n") ;

    
return 0;
}

