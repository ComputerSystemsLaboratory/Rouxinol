#include<stdio.h>
int main(){
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c),a+b+c){
        c=100-c;
        int win=0;
        int mon=0;
        for(int i=0;i<a;i++){
            int d;
            scanf("%d",&d);
            if(b==i+1)win=d;
            mon+=c*d;
        }
        printf("%d\n",win?mon/win:0);
    }
}
