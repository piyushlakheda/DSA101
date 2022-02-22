#include <stdio.h>

void TOH(int n, char from, char to, char aux)
{

    if (n == 1)
    {
        printf("\n move disk 1 from %c to %c", from, to);
    }
    else
    {
        TOH(n - 1, from, aux, to);
        printf("\n move disc %d from peg %c to %c", n, from, to);
        TOH(n - 1, aux, to, from);
    }
}

int main()
{
    int n;
    printf("Enter the no. of disk");
    scanf("%d", &n);
    TOH(n, 'a', 'c', 'b');
    return 0;
}