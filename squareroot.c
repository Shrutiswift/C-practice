#include<stdio.h>
#include<math.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, c;
        scanf("%d", &n);
        c = sqrt(n);
        printf("%d\n", c);
    }
}