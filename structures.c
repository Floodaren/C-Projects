#include <stdio.h>
#include <stdlib.h>
#include "personToStructure.h"


int main() {
    struct person person1;
    struct person person2;

    person1.userId = 1;
    person2.userId = 2;

    puts("Enter the first name of user 1");
    //Do not use "gets" because it's unsafe. If the user input more characters that has been predefined the program will overflow the buffer.
    //Therefor use "fgets" because it will cut the end of the string if it's too long.
    fgets(person1.firstname, 25, stdin);

    puts("Enter the first name of user 2");
    fgets(person2.firstname, 25, stdin);

    printf("\nUser 1\n");
    printf("ID: %d\n", person1.userId);
    printf("First name: %s\n", person1.firstname);
    printf("User 2\n");
    printf("ID: %d\n", person2.userId);
    printf("First name: %s\n", person2.firstname);



    return 0;
}