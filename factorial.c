#include <stdio.h>

int fact(int n)
{
    if (n >= 1)
    {
        return n * fact(n - 1);
    }
    return 1;
}
int main()
{

    int n, fac;
    printf("Enter the no.");
    scanf("%d", &n);

    fac = fact(n);

    printf("%d", fac);
    return 0;
}