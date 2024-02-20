#include<stdio.h>
#include<math.h>
int main() {
    int t;
    int n, r, d;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        r = n%10;
        d = n/10;
        if(r > 0) {
            printf("%d\n", d+1);
        }
        else {
            printf("%d\n", d);
        }
    }
    return 0;
}