#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    int p;
    struct node* next;
} node_t;

node_t* f = NULL; // queue initialisation as global variable

// enqueue function
void enqueue(int d, int pr)
{
    node_t* temp;
    node_t* new_n;
    new_n = (node_t*)malloc(sizeof(node_t));
    new_n->data = d;
    new_n->p = pr;
    if (f == NULL)
    {
        new_n->next = f;
        f = new_n;
    }
    else if (pr == 0)
    {
        new_n->next = f;
        f = new_n;
    }
    else
    {
        temp = f;
        while ((temp->next != NULL) && ((temp->next->p) <= pr)) temp = temp->next;
            new_n->next = temp->next;
        temp->next = new_n;
    }
}

// input node
void input_node()
{
    int d;
    int p;
    printf("Input the data : ");
    scanf(" %d", &d);
    printf("Input the priority : ");
    scanf(" %d", &p);
    enqueue(d,p);
}

// dequeue function
void dequeue()
{
    node_t* temp;
    if (f == NULL)
        printf("\nQueue is Empty");
    else
    {
        temp = f;
        f = f->next;
        printf("\n");
        printf("Deleted element : %d\nPriority : %d\n", temp->data, temp->p);
        free(temp);
    }
}

// display function
void display_List(node_t* q)
{
    if (q == NULL)
        printf("No elements to display\n");
    else
    {
        struct node* temp = f;
        while (temp != NULL)
        {
            printf("Data : %d\nPriority : %d\n", temp->data, temp->p);
            temp = temp->next;
        }
    }
}

// choice to the user given in main function only
int main()
{
    do
    {
        int ch;
        printf("1. Enqueue\t");
        printf("2. Dequeue\n");
        printf("3. Display\t");
        printf("4. Exit\n");
        printf("\nEnter the number corresponding to your choice : ");
        scanf(" %d", &ch);
        switch (ch)
        {
            case 1: input_node();
                    break;
            case 2: dequeue();
                    break;
            case 3: display_List(f);
                    break;
            case 4: exit(0);
                    break;
            default:printf("Invalid entry\n");
        }
        printf("\n");
        printf("Press any key to continue \n");
        getchar();
        fflush(stdin);
    } while (1);
    return 0;
}