#include<stdio.h>
#include<algorithm>
int main(){
    int a[5];
    while(~scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4])){
        std::sort(a,a+5);
        for(int i=4;i>0;i--)printf("%d ",a[i]);
        printf("%d\n",a[0]);
    }
}