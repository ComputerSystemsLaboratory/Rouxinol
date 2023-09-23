#include <stdio.h>

int main(){
    int n,cnt;
    int a,b,c,d;
    while(scanf("%d",&n)!=EOF){
        cnt = 0;
        if(n<37){
            for(a=0;a<10&&a<=n;a++){
                for(b=0;b<10&&a+b<=n;b++){
                    for(c=0;c<10&&a+b+c<=n;c++){
                        d = n-a-b-c;
                        if(d<10)cnt++;
                    }
                }
            }
        }
        printf("%d\n",cnt);
    }
}