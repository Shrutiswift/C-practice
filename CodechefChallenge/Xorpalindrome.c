#include<stdio.h>
int main() {
    int t;    //t = testcases
    int N;    //N = length of s
    int s[100000];  //s = binary string
    scanf("%d", &t);
    while(t--) {
        s[100000];
        scanf("%d\n", &N);
        scanf("%d\n", &s);
        for(int i = 0; i <= N; i++) {
            if (s[i] == s[N-1-i]) {
                // do nothing in this case
            }
            else {
                if(N == 0 ) {
                    printf("No");
                    break;
                }
                else {
                    if(s[i]==0){
                        s[i]=1;
                    } 
                    else {
                        s[i]=0;
                    }
                    N--;
                    printf("Yes");
                    
                }
            }
        }
    }
}