#include <stdio.h>


int main() {
    int number = 20;
    int number2 = 10;
    int *ip;
    int *ip2;

    ip = &number;
    ip2 = &number2;

    printf("\nAdresses:\n");
    printf("adress of ip is: %p\n", ip);
    printf("adress of number is: %p\n", &number);
    printf("adress of ip2 is: %p\n", ip2);
    printf("adress of number 2 is: %p\n", &number2);
    

    printf("\nValues:\n");
    printf("value of ip is: %d\n", *ip);
    printf("value of number is: %d\n", number);
    printf("value of number2 is: %d\n\n", number2);
   return 0;
}

