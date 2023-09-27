
#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <set>
#define foreach(t,p) for(t::iterator it=p.begin();it!=p.end();++it)
#define rforeach(t,p) for(t::reverse_iterator it=p.rbegin();it!=p.rend();++it)
using namespace std;
#define REP(n) for(int i=0;i<n;i++)
#define N 1000001
#define POL 180
int pol[POL];
int pol2[POL];
int dp1[N];
int dp2[N];
int num;

void solve1() {
    REP(N) dp1[i] = N;
    dp1[0] = 0;
        for(int k=0;k<N;k++) {
                for(int j=0;j<POL;j++) 
                    if(k+pol[j] <=N)
                        dp1[k+pol[j] ] = min(dp1[k+pol[j]],dp1[k]+1);
        }
}

void solve2() {
    REP(N) dp2[i] = N;
    dp2[0] = 0;
    for(int i=0;i<N;i++) {
          //                cout << i << " "  << " " << dp2[i] << endl;
            for(int j=0;j<num;j++) {
                if(i+pol2[j] <= N) {
                    dp2[i+pol2[j] ] = min(dp2[i+pol2[j]],dp2[i]+1);
                }
            }
    }
}

int main() {
    num = 0;
    REP(POL){
        pol[i] = (i+1)*(i+2)*(i+3)/6;
        if(pol[i]%2 == 1) pol2[num++] = pol[i];
    }
    solve1();
    solve2();
//    REP(30) cout << dp1[i];
    int q;
    while(cin >> q && q) {
        cout << dp1[q] << " " << dp2[q] << endl;
    }

    return 0;
}