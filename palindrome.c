#include<stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k;
        scanf("%d%d", &n, &k);
        char bin[1000];
        scanf("%s", bin);
        for(int i = 0; i <= n; i++) {
            if (bin[i] == bin[n-1-i]) {
                // do nothing in this case
            }
            else {
                if(k == 0 ) {
                    printf("No");
                    break;
                }
                else {
                    if(bin[i]==0){
                        bin[i]=1;
                    } 
                    else {
                        bin[i]=0;
                    }
                    k--;
                    printf("Yes");
                    
                }
            }
                // check if there are operations left
                // if operations are left, flip the digit at the ith index and also decrease operations by 1
                // if operations are not left and the digits are not same, then the string cannot be converted into a palindrome
        }
    }
}
