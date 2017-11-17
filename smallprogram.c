#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int i, howMany;
    //Remember to always initialize an int because it doesn't set it to 0 as standard.
    int total = 0;
    float avarage = 0.0;
    int * pPointsArray;

    printf("How many numbers do you want to avarage?\n");
    //&-operator means the adress of the variable
    scanf(" %d", &howMany);
    
    //Get memory from the heap. Alloc enough memory for the array.
    pPointsArray = (int *) malloc(howMany * sizeof(int));

    printf("Enter your numbers \n");

    for (i = 0; i<howMany;i++)
    {
        //Place values that the user types in the correct adresses with the &-operator
        scanf(" %d", &pPointsArray[i]);
        //pPointsArray is a pointer and therefor we can get the values in the array.
        total += pPointsArray[i];
    }
    
    //Typecast so that both total and howMany is in the correct data type.
    avarage = (float)total / (float)howMany;
    printf("The total is : %d\n", total);
    printf("The howmany is : %d\n", howMany);

    printf("The average of the numbers are %f", avarage);
    
    //Free memory that has be allocated in the heap.
    free(pPointsArray);
    return 0;
}
