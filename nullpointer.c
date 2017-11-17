#include <stdio.h>


int main() {
    
    int *nullpoint = NULL;
    printf("Value of the pointer is : %d\n", nullpoint);
    if (!nullpoint)
    {
        printf("pointer is null\n");
    }
    else 
    {
        printf("pointer is not null\n");
    }
    return 0;
}

