#include<stdio.h>
int main() {
    int t;
    int A, B, C, n;
    int X, Y, Z;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &A, &B, &C);
        if(A<B && A<C) {
            printf("%d\n", B+C);
        }
        else if(C < A && C < B){
            printf("%d\n", A+B);
        }
        else if(B < A && B < C){
            printf("%d\n", C+A);
        }
        else if(A = B = C) {
            printf("%d\n", A+B);
        }
        else if(B == C && A > B ) {
            printf("%d\n", A+B);
        }
    }
    return 0;
}