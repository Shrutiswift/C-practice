#include<stdio.h>
int main() {
    int t;
    int X,Y;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d", &X, &Y);
        if(X > Y) {
            printf("CAR");
        }
        else if(X==Y){
            printf("SAME");
        }
        else {
            printf("BIKE");
        }
    }
    return 0;
}