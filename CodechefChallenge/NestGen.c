#include <stdio.h>
int main() {
    //t is the number of testcases
    int t;
    scanf("%d", &t);
    while(t--) {
        int A, B, X, Y, C, M;
        scanf("%d%d%d%d", &A, &B, &X, &Y);
        M = A*B;
        C = X*Y;
        if (C >= M) {
            printf("Yes");
        }
        else {
            printf("No");
        }
    }
}