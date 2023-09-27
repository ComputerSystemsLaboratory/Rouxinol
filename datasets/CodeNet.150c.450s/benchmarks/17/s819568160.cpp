#include<cstdio>
#include<algorithm>
int main(){
    int a[5];
    while(~scanf("%d",&a[0])){
        for(int i=1;i<5;i++){
            scanf("%d",&a[i]);
        }
        std::sort(a,a+5);
        std::reverse(a,a+5);
        for(int i=0;i<4;i++){
            printf("%d ",a[i]);
        }
        printf("%d\n",a[4]);
    }
}