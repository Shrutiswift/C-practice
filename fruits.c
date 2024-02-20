#include<stdio.h>
#include<math.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int X, Y, Z;
        scanf("%d%d", &X, &Y); 
        Z = X/2;      
        if(Z > Y) {
            printf("%d", Y);
        }
        else {
            printf("%d", Z);
            
        }
        
    } 
}