#include <stdio.h>

int main(){
    int x,y,s,a,b,l;
    scanf("%d %d %d",&x,&y,&s);
    while (!(x==0&&y==0&&s==0)) {
    
        l=0;
        for (a=1;a<s;a++) {
            for (b=a;b<s;b++) {
                int u,t,c,d,e,f;
                c=a*(100+x)/100;
                d=b*(100+x)/100;
                e=a*(100+y)/100;
                f=b*(100+y)/100;
                u=c+d;
                t=e+f;
                if (u==s) {
                    if (l<t) {
                        l=t;
                    }
                }
            }
        }
        printf("%d\n",l);
        scanf("%d %d %d",&x,&y,&s);
    }
    return 0;
}