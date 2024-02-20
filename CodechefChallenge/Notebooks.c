#include<stdio.h>
int main() {
    int t;
    int N, Z;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &N);
        Z = N*10;
        printf("%d\n", Z);
    }
    return 0;
}