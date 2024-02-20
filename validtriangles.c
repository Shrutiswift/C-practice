#include<stdio.h>
int main() {
    // t = No of testcases
    int t;
    scanf("%d", &t);
    while(t--) {
        // A, B, C = Angles of a triangle
        int A, B, C;
        scanf("%d%d%d", &A, &B, &C);
        if(A+B+C == 180) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        
    }
    
}