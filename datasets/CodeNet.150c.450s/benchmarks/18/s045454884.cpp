#include <stdio.h>

int main(){
    long debt = 100;
    int n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        debt = (long)(debt*1.05+0.99);
    }
    printf("%ld\n",debt*1000);
}