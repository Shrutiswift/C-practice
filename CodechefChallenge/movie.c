#include<stdio.h>
int main() {
    int t;
    int div, sub, sum;
    scanf("%d", &t);
    while(t--) {
        int n, m;
        scanf("%d%d", &m, &n);
        div = n/2;
        sub = m - n;
        sum = div + sub;
        printf("%d\n", sum);
    }
    return 0;
}