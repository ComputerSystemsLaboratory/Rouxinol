#include<cstdio>
#include<algorithm>
#include<cstdlib>
#define INF 0x1234567812345678

using namespace std;
typedef long long int lli;

lli d[200][200];
int v,e;

void warshall() {
    for(int k=0; k<v; k++)
        for(int i=0; i<v; i++)
            for(int j=0; j<v; j++)
                if(d[i][k] != INF && d[k][j] != INF)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

int main(void) {
    scanf("%d%d",&v,&e);
    for(int i=0; i<200; i++)
        for(int j=0; j<200; j++)
            d[i][j] = 0x1234567812345678;

    for(int i=0; i<e; i++) {
        int s,t,d_;
        scanf("%d%d%d",&s,&t,&d_);
        d[s][t] = d_;
    }
    for(int i=0; i<v; i++)
        d[i][i] = 0;
    warshall();
    for(int i=0; i<v; i++)
        if(d[i][i] < 0) {
            printf("NEGATIVE CYCLE\n");
            return 0;
        }
    for(int i=0; i<v; i++)
        for(int j=0; j<v; j++) {
            if(d[i][j] == INF)
                printf("INF");
            else
                printf("%lld", d[i][j]);
            printf("%c", (j==v-1 ? '\n' : ' '));
        }
    return 0;
}