#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m, p;
        scanf("%d%d%d", &n, &m, &p);
        if (n >= m && n >= p) {
            if(m >= p) {
                printf("%d", m);
            }
            else {
                printf("%d", p);
            }
        }
        else if(m >= n && m >= p){
            if(n >= p) {
                printf("%d", n);
            }
            else {
                printf("%d", p);
            }
        }

        else if (n >= m) {
            printf("%d", n);
        }

        else {
            printf("%d", m);
        }
        

    }
    return 0;
}
