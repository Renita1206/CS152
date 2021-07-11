//Writing multiple lines into a text file
#include <stdio.h>
int main()
{
    FILE* fp;
    char line[64];
    int i;
    int n;
    fp = fopen("f1.txt", "w");
    if (fp == NULL) printf("An error occurred in opening the requested file ...\n");
    printf("Input the number of lines to be written : ");
    scanf("%d", &n);
    printf("\n");
    printf("Input the contents of the file ... \n");
    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]%*c", line);
        fputs(line, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    return 0;
}
