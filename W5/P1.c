//Palindrome

#include <stdio.h>
#include <string.h>

void palin(char*);

int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s",s);
    palin(s);
    return 0;
}

void palin(char s[100])
{
    int length = strlen(s);
    int j = length - 1;
    char rev[100];
    for (int i = 0; i < length; i++)
    {
        rev[i] = s[j];
        j--;
    }
    printf("Reversed string: %s\n",rev);
    int check=1;
    for(int i=0;i<length;i++)
    {
        if(s[i]!=rev[i])
        {
            printf("String is not a palindrome");
            check=0;
            break;
        }
    }
    if(check==1)
        printf("String is a palindrome");
}

