#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)
#define ZERO(a) memset(a,0,sizeof(a))

bool s[14], h[14], c[14], d[14];

void init_card() {
    ZERO(s); ZERO(h); ZERO(c); ZERO(d);
}

int main() {
    init_card();
    int n;
    cin >> n;
    rep(i,n) {
        char p;
        int a;
        cin >> p >> a;
        if(p=='S') s[a] = true;
        if(p=='H') h[a] = true;
        if(p=='C') c[a] = true;
        if(p=='D') d[a] = true;
    }
    
    FOR(i,1,14) if(!s[i]) printf("S %d\n", i);
    FOR(i,1,14) if(!h[i]) printf("H %d\n", i);
    FOR(i,1,14) if(!c[i]) printf("C %d\n", i);
    FOR(i,1,14) if(!d[i]) printf("D %d\n", i);

    return 0;
}