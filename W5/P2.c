#include <stdio.h>
#include <string.h>

void replace(char*,char,char);

int main()
{
    char s[100];
    char ch1,ch2;
    printf("Enter a string: ");
    scanf("%s",s);
    printf("Enter a characters: ");
    scanf("%c",&ch1);
    scanf("%c %c",&ch1,&ch2);
    replace(s,ch1,ch2);
    return 0;
}

void replace(char* s, char ch, char r)
{
    int length = strlen(s);
    char rep[100];
    for (int i = 0; i < length; i++)
    {
        if(s[i]!=ch)
            rep[i] = s[i];
        else
            rep[i]=r;
    }
    printf("%s",rep);
}