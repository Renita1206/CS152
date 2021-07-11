//Concatenate strings
#include <stdio.h>
#include <string.h>

void concat(char*,char*,int);

int main()
{
    char s[100],s2[100];
    int n;
    printf("Enter a string: ");
    scanf("%s",s);
    printf("Enter a string: ");
    scanf("%s",s2);
    printf("Enter n: ");
    scanf("%d",&n);
    concat(s,s2,n);
    return 0;
}

void concat(char* s, char* s2, int n)
{
    int length = strlen(s2);
    char result[1000];
    int count=0;
    for (int i = 0; i < strlen(s); i++)
    {
         result[count]=s[i];
         count+=1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < length;j++)
        {
            result[count]=s2[j];
            count+=1;
        }
    }
    printf("%s",result);
}
