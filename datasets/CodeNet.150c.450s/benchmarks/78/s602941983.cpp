#include<cstdio>
#include<cstring>

#define MIN(X,Y) ((X)<(Y) ? (X) : (Y))

short tbl[2000000], otbl[2000000];

int main(void) {
    memset(tbl,0x7F, sizeof(tbl));
    memset(otbl,0x7F, sizeof(otbl));

    for(int i=1; i*(i+1)*(i+2)/6<1050000; i++)
        tbl[i*(i+1)*(i+2)/6] = 1;
    for(int i=1; i<1005000; i++)
        for(int j=1; i-j*(j+1)*(j+2)/6>=0; j++)
            tbl[i] = MIN(tbl[i], 1+tbl[i-j*(j+1)*(j+2)/6]);

    for(int i=1; i*(i+1)*(i+2)/6<1050000; i+=4)
        otbl[i*(i+1)*(i+2)/6] = 1;
    for(int i=1; i<1005000; i++)
        for(int j=1; i-j*(j+1)*(j+2)/6>=0; j+=4)
            otbl[i] = MIN(otbl[i], 1+otbl[i-j*(j+1)*(j+2)/6]);

    while(1) {
        int n;
        scanf("%d",&n);
        if(!n) break;
        printf("%d %d\n",tbl[n],otbl[n]);
    }
    return 0;
}