#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int X, A, B, Y;
        scanf("%d%d%d", &X, &A, &B);
        Y = A + (2 * B);
        if(X <= Y) {
            printf("Qualify\n");
        }
        else {
            printf("NotQualify\n");
        }
    }
    return 0;
}