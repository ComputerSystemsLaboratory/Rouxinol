#include<stdio.h>
using namespace std;

int a[300];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        printf("node %d: ",i);
        printf("key = %d, ",a[i]);
        if(i/2>=1) printf("parent key = %d, ",a[i/2]);
        if(i*2<=n) printf("left key = %d, ",a[i*2]);
        if(i*2+1<=n) printf("right key = %d, ",a[i*2+1]);
        printf("\n");
    }
    return 0;
}