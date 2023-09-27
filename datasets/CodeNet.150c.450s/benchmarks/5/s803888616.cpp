#include <stdio.h>

int main(){
    int n,a[100];
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[n-1-i]);
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf(i-n+1? " ":"\n");
    }
}