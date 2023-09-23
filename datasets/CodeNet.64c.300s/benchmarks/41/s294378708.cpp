#include <stdio.h>
long long int a[1000000];
int x;
void build(int n){
    long long int temp;
    int top=n,l=n*2,r=n*2+1;
    if(a[r]>a[n]&&r<=x)top=r;
    if(a[l]>a[top]&&l<=x)top=l;
    if(top!=n){
        temp=a[top];
        a[top]=a[n];
        a[n]=temp;
        build(top);
    }
}
int main(){
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        scanf("%lld",&a[i]);
        a[i*2]=a[i*2+1]=0;
    }
    for(int i=x/2;i>0;i--){
        build(i);
    }
    for(int i=1;i<=x;i++){
        printf(" %lld",a[i]);
    }
    printf("\n");
}