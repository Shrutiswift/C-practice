#include <stdio.h>
int main()
{
    int t;
    int X, i;
    int draw = 0, chef = 0, carlson = 0;
    char a[14];
    scanf("%d", &t);

    while (t--)
    {
        draw = 0;
        chef = 0;
        carlson = 0;
        scanf("%d", &X);
        scanf("%s", &a);
        for (i = 0; i < 14; i++)
        {
            switch (a[i])
            {
            case 'C':
                carlson = carlson + 1;
                break;
            case 'N':
                chef = chef + 1;
                break;
            case 'D':
                draw = draw + 1;
                break;
            }
        }

        carlson = 2 * carlson + draw;
        chef = 2 * chef + draw;
        if (carlson < chef)
        {
            printf("%d", 40 * X);
        }
        else if (carlson > chef)
        {
            printf("%d", 60 * X);
        }
        else
        {
            printf("%d", 55 * X);
        }
    }
    return 0;
}