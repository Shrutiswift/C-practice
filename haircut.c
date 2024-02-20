#include<stdio.h>
int main() {
    int t, c;
    scanf("%d", &t);
    while(t--) {
        int m, n;
        scanf("%d%d",&n, &m); //n = no of waiting customers, m = time taken per customer
        c = n * m;
        printf("%d", c);
    }
    return 0;
}