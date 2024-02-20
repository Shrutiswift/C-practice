#include<stdio.h>
int main() {
    int t;
    int X, Y, Z;     
    scanf("%d", &t);
    while(t--) {             
        scanf("%d%d", &X, &Y);
        Z = X / Y; 
        
        
        printf("%d", Z);
        
    }
    return 0;
}