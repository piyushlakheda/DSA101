#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void travers(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *deletefirs(struct node *head)
{
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 8;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 0;

    third->next = NULL;

    head = deletefirs(head);
    travers(head);

    return 0;
}