#include<stdio.h>
int n,a[100];
void pr(){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i==n-1) printf("\n");
        else printf(" ");
    }
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    pr();
    for(int i=1;i<n;i++){
        int key=a[i];
        int j;
        for(j=i-1;j>=0&&a[j]>key;j--){
            a[j+1]=a[j];
        }
        a[j+1]=key;
        pr();
    }
    return 0;
}