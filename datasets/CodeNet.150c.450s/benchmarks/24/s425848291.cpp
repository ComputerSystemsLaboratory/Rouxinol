#include<cstdio>

#define MIN(X,Y) ((X<Y)?(X):(Y))

int main(void) {
    while(true) {
        int n,m,dis[11]={};
        scanf("%d%d",&n,&m);
        if(!n) break;
        for(int i=0; i<n; i++) {
            int d,p;
            scanf("%d%d",&d,&p);
            dis[p] += d;
        }

        for(int i=10; i; i--) {
            int k = MIN(dis[i], m);
            dis[i] -= k;
            m -= k;
        }

        int res=0;
        for(int i=0; i<=10; i++) {
            res += dis[i] * i;
        }

        printf("%d\n",res);
    }

    return 0;
}