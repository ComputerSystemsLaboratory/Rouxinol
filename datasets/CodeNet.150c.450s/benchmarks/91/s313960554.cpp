#include <stdio.h>

const int MAX_V = 1000000;

int p[MAX_V+1];
int data[MAX_V];
int main() {
    int i,k,a;
    for(i = 2;i<=MAX_V;i++) {
        p[i] = 1;
    }
    for(i = 2;i*i<=MAX_V;i++) {
        if(p[i]) {
            for(k = 2*i;k<=MAX_V;k+=i) {
                p[k] = 0;
            }
        }
    }
    for(i = 0;i<=MAX_V;i++){
        data[i+1] = data[i]+p[i];
    }
    while(scanf("%d",&a) != EOF){
        printf("%d\n", data[a + 1]);
    }
    return  0;
}