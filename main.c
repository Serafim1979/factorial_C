#include <stdio.h>
#include <stdlib.h>
////////////////////////////////////////////
int factor(int n);
int factorTwo(int n);
////////////////////////////////////////////
int main()
{
    int n, rez, p = 5;
    printf("Enter a number factorial: ");
    scanf("%d", &n);

    rez = factor(n);
    printf("%d\n", rez);

    rez = factorTwo(n);
    printf("%d\n", rez);

    return 0;
}
////////////////////////////////////////////
int factor(int n)
{
    if(n <= 1)
        return 1;
    return (n < 2) ? 1 : n * factor(n - 1);
}
////////////////////////////////////////////
int factorTwo(int n)
{
    int r;
    if(n <= 1)
        return 1;
    for(r = 1; n > 1; r *=(n--));
    return r;
}
