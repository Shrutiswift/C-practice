#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, d;
        scanf("%d", &n);
        d = n%4;
        if (d = (int)d) {
            printf("Not Good\n");
        }
        else{
            printf("Good\n");
        }
    }
    return 0;
}