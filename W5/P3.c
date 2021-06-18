#include <stdio.h>
#include <string.h>

void rem(char*);

int main()
{
    char s[100];
    char ch1,ch2;
    printf("Enter a string: ");
    scanf("%s",s);
    rem(s);
    return 0;
}

void rem(char* s)
{
    int length = strlen(s);
    char rep[100];
    rep[0]=s[0];
    int count=1;
    for (int i = 1; i < length; i++)
    {
        for (int j = 0; j < i;j++)
        {
            if(s[i]==s[j])
            {
                break;
            }
            else if(j==(i-1))
            {
                rep[count]=s[i];
                count+=1;
            }
        }
    }
    printf("%s",rep);
}
