#include<cstdio>
#include<cstring>

int W[2000000];
int H[2000000];

int main(void) {
    while(true) {
        int n,m;
        int w[2000], h[2000];
        int res=0;

        scanf("%d%d",&n,&m);
        if(!n) break;

        memset(W, 0, sizeof(W));
        memset(H, 0, sizeof(H));
        memset(w, 0, sizeof(w));
        memset(h, 0, sizeof(h));

        int last=0;
        for(int i=1; i<=n; i++) {
            int t;
            scanf("%d",&t);
            last+= t;
            h[i] = last;
        }
        last = 0;
        for(int i=1; i<=m; i++) {
            int t;
            scanf("%d",&t);
            last+= t;
            w[i] = last;
        }

        for(int i=0; i<=n; i++)
            for(int j=i+1; j<=n; j++)
                H[h[j]-h[i]]++;
        for(int i=0; i<=m; i++)
            for(int j=i+1; j<=m; j++)
                W[w[j]-w[i]]++;

        for(int i=0; i<1600000; i++) {
            res += W[i] * H[i];
        }

        printf("%d\n",res);

    }
    return 0;
}