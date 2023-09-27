#include<stdio.h>
#define MAX 250
int main(){
    int a[MAX];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        printf("node %d: key = %d, ",i,a[i]);
        if(i/2>=1) printf("parent key = %d, ",a[i/2]);
        if(2*i<=n) printf("left key = %d, ",a[2*i]);
        if(2*i+1<=n) printf("right key = %d, ",a[2*i+1]);
        printf("\n");
    }    
}
