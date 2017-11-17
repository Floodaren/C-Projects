#include <stdio.h>
#include <stdlib.h>


int main() {
    //File pointer
    FILE * fPointer;

    //Read from the file testFile.txt
    fPointer = fopen("testFile.txt", "r");

    //Char-array
    char singleLine[150];

    //While loop to read through the txt-file.
    // read through the file until the pointer is in the end of the file
    while(!feof(fPointer))
    {
        //Gets the information from each line
        fgets(singleLine, 150, fPointer);

        //Prints out the line that has been stored in the singleLine-variable
        puts(singleLine);
    }

    //Close the file pointer
    fclose(fPointer);

    return 0;
}

