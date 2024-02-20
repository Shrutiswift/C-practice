#include<stdio.h>
int main() {
    int t;
    int A, B, Z;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d", &A, &B);
        Z = 21 -(A+B);
        if (Z > 10) {
            printf("%d", -1);
        }
        else {
            printf("%d", Z);
        }
    }
    return 0;
}