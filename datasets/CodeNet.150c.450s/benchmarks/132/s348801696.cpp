#include <cstdio>
#include <cstring>

int cand[100];

int main(void) {
    while(true) {
        int i,n,p,wan;
        scanf("%d%d",&n,&p);
        if(!n && !p) break;

        wan = p;
        memset(cand, 0, sizeof(cand));
        for(i=0; cand[i]!=p; i=(i+1)%n) {
            if(wan) cand[i]++, wan--;
            else wan+=cand[i], cand[i]=0;
        }
        printf("%d\n", i); 
    }
    return 0;
}