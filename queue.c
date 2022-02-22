#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)

{

    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    int a = -1;
    if (isfull(q))
    {
        printf("queue is full\n");
    }
    q->r++;
    q->arr[q->r] = val;
    printf("Enqueued elements is %d\n", val);
}

int dequeue(struct queue *q)
{
    int val;

    if (isEmpty(q))
    {
        printf("queue is empty\n");
    }
    q->f++;
    val = q->arr[q->f];
    return val;
}

void traverse(struct queue *q)
{
    if (q->r == -1)
    {
        printf("queue is empty\n");
    }
    for (int i = q->r; i <= q->f; i++)
    {
        printf("%d  ", q->arr[i]);
    }
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 4;
    q->f = q->r = 0;
    q->arr = (int *)malloc(q->size-- * sizeof(int));

    enqueue(q, 4);
    enqueue(q, 6);
    printf("dequed element is %d", dequeue(q));
    return 0;
}