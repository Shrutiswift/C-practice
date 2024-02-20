#include <stdio.h>
#include <math.h>
int main() {
    int t;
    int a;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        n = pow((0.143*n), n);
        printf("%d\n", round(n));
    }
    return 0;
}