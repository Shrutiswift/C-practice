#include <stdio.h>

int main() {
    int t;
    int A, B, C;
    scanf("%d\n", &t);
    while(t--) {
        scanf("%d%d%d", &A, &B, &C);
        if(A+C > B) {
            printf("%d\n", A + C);
        }
        else {
            printf("%d\n", B);
        }
    }
    return 0;
}