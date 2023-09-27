#include<stdio.h>
int main(){
    while(1){
        int n,m,p,sum=0,d;
        scanf("%d %d %d",&n,&m,&p);
        if(n==0&&m==0&&p==0) return 0;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            sum+=x;
            if(m==i+1) d=x;
        }
        if(d!=0) printf("%d\n",(100-p)*sum/d);
        else printf("0\n");
    }
}