#include <stdio.h>
int main(){
    int n,a[5000],top;
    while(1){
        scanf("%d",&n);
        if(n==0)return 0;
        scanf("%d",&a[0]);
top=a[0];
        for(int i=1;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i-1]>0)a[i]+=a[i-1];
if(a[i]>top)top=a[i];
        }
        
        printf("%d\n",top);
    }
}