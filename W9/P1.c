//Merging two text files into a third
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* fp1;
    FILE* fp2;
    FILE* fp3;
    char f1n[32];
    char f2n[32];
    char f3n[32];
    char c;
    printf("Input the full name of the first file (input) : ");
    scanf(" %[^\n]%*c", f1n);
    printf("Input the full name of the second file (input) : ");
    scanf(" %[^\n]%*c", f2n);
    printf("Input the full name of the third file (output) : ");
    scanf(" %[^\n]%*c", f3n);
    fp1 = fopen(f1n, "r");
    fp2 = fopen(f2n, "r");
    fp3 = fopen(f3n, "w");
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("An error occurred in opening the requested file(s) ...\n");
    }
    while ((c = fgetc(fp1)) != EOF)
        fputc(c, fp3);
    while ((c = fgetc(fp2)) != EOF)
        fputc(c, fp3);
    printf("%s and %s were merged into %s successfully ... \n", f1n, f2n, f3n);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}