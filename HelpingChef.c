#include<stdio.h>
int main() {
    // t = No of testcases
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if(n < 10) {
            printf("Thanks for helping Chef!");
        }
        else {
            printf("-1");
        }
    }
}