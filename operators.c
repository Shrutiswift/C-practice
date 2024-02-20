#include<stdio.h>
int main() {
    // t = No of testcases
    int t;
    scanf("%d", &t);
    while(t--) {
        // A and B are the integers 
        int A, B;
        scanf("%d%d", &A, &B);
        if (A > B) {
            printf(">");
        }
        else if (A < B){
            printf("<");
        }
        else {
            printf("=");
        }
    }
}