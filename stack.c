#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("stack is overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("stack underflow\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

void traversing(struct stack *ptr)
{
    int d;
    if (ptr->top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        for (d = ptr->top; d > -1; d--)
        {
            printf("%d", ptr->arr[d]);
            printf("\n");
        }
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack is created\n");

    printf("Before pushing , Full: %d\n", isfull(sp));

    printf("Before pushing , empty: %d\n", isempty(sp));
    push(sp, 4);
    push(sp, 5);
    push(sp, 4);
    push(sp, 5);
    push(sp, 4);
    push(sp, 5);
    push(sp, 4);
    push(sp, 5);
    push(sp, 4);
    push(sp, 5);

    printf("After pushing , Full: %d\n", isfull(sp));

    printf("After pushing , empty: %d\n", isempty(sp));

    printf("popeed %d from the stack \n", pop(sp));
    traversing(sp);
    return 0;
}