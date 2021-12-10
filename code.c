#include <stdio.h>
int main()
{
    int m,n,p;
    int a,b;
    printf("Enter the number dividing: ");
    scanf("%d",&p);
    for(m=999999;m>=100000;m--)
    {
        if(m%p==0)
        {
            break;
        }
    }
    printf("\n\n The greatest 6-digit number divisible by %d is %d",p,m);
    
    for(n=1000000; n<=9999999;n++)
    {
        if(n%p==0)
        {
            break;
        }
    }
    printf("\n\n The smallest 7-digit number divisible by %d is %d",p,n);
}
