#include <stdio.h>

int main() {
    printf("%12sCIRCLE K VIETNAM\n", " ");
    printf("%6s113 Tr%cn Dai Nghia - HBT - H%c N%ci\n", " ", 131, 133, 147);
    printf("Receipt No: 2094 02 20191005 SZFB\n");
    printf("Date: Oct 5, 2019 06:39 PM\n");
    printf("Cashier: 5360-Linh Luong Thi Thuy\n");
    printf("Description:\n");
    printf("------------------------------------------\n");
    printf("------------------------------------------\n");
    printf("%3s %-29s %8s\n", "1", "DASANI Bottled Water 1.5L*1PT", "12,000");
    printf("---%39s\n", "-----------");
    printf("%3s %-10s %14s     %8s\n", "1", "Item(s)", "(VAT included)", "12,000");
    printf("%8s %33s\n", "CASH", "50,000");
    printf("%10s %31s\n", "CHANGE", "39,000");
    printf("%7sChi xuat hoa don trong ngay\n", " ");
    printf("%10sXin cam on quy khach !\n", " ");

    return 0;
}
