#include <stdio.h>
#include <stdlib.h>


int main() {

    //File pointer
    FILE * fPointer;
    //Open up the file using the pointer. First parameter is the file to be created or to open up. Second is what we want to do, in our case write ("w")
    // If the file already exist the file will be replaced with a new file with the new information in it.
    fPointer = fopen("testFile.txt", "w");
    //Print text in the txt-file using the file pointer.
    fprintf(fPointer, "Hello this is a test\n");
    //Close the pointer to give back the memory to the computer
    fclose(fPointer);

    return 0;
}

