#include<stdio.h>
int main() {
    int t;
    int n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        if(n > 65) {
            printf("Overload\n");
        }
        else if(n < 35) {
            printf("Underload\n");
        }
        else {
            printf("Normal\n");
        }
    }
    return 0;
}