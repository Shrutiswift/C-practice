#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 0;
    scanf("%d", &n);
    int k[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
        if (k[i] % 2 == 0)
        a++;
        else
        b++;
    }
    if (a > b)
    {
        printf("READY FOR BATTLE\n");
    }
    else
    {
        printf("NOT READY\n");
    }
    return 0;
}