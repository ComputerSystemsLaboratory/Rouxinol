#include<stdio.h>

int main(){
    int n,x;
    while(true){
        scanf("%d%d",&n,&x);
        if (n==0&&x==0)break;
        int a=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=n;k++){
                    if(i+j+k==x&&i<j&&j<k){
                        a++;
                    }
                }
            }
        }
        printf("%d\n",a);
    }
}


