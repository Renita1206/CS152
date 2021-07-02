#include <stdio.h>
#include <string.h>

// main structure
typedef struct cricket
{
    char player[32];
    char team[16];
    float average;
}players;

// input function
void input_details(players player[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Input name of player %d : ", i+1);
        scanf(" %[^\n]%*c", &player[i].player);
        printf("Input team of player %d : ", i+1);
        scanf(" %[^\n]%*c", &player[i].team);
        printf("Input batting average of player %d : ", i+1);
        scanf(" %f", &player[i].average);
        fflush(stdin);
        printf("\n");
    }
}

// sorting function
void detail_sort(players player[], int n)
{
    players temp;
    int i; int j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(player[i].team, player[j].team) > 0)
            {
                temp = player[i];
                player[i] = player[j];
                player[j] = temp;
            }
        }
    }
}
//output function
void output_details(players player[], int n)
{
    printf("Player list: \n");
    printf("Name \t Team Batting \t average \n");
    int i; int j;
    for (i = 0; i < n; i++)
    {
        printf(" %s", player[i].player);
        for (j = 0; j < (16 - strlen(player[i].player)); j++) printf(" ");
            printf(" %s", player[i].team);
        for (j = 0; j < (16 - strlen(player[i].team)); j++) printf(" ");
            printf("%.2f\n", player[i].average);
    }
}

int main()
{
    players player[8];
    int n = 5;
    input_details(player, n);
    detail_sort(player, n);
    output_details(player, n);
    return 0;
}