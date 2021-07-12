//Copy one text file into another using command line arguments
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    FILE *f1, *f2;
    int ch;
    if (argc != 3) 
    {
        printf("Invalid number of arguments.");
        return 0;
    }
    f1 = fopen(argv[1], "r");
    if (f1 == NULL) 
    {
        printf("Source file cannot be found");
        return 0;
    }
    f2 = fopen(argv[2], "w");
    if (f2 == NULL) 
    {
        printf("target file cannot be opened");
        fclose(f1);
        return 0;
    }
    while (1) 
    {
        ch = fgetc(f1);
        if (feof(f1)) break;
        fputc(ch, f2);
    }
    printf("File copy complete");
    fclose(f1);
    fclose(f2);
    return 0;
}