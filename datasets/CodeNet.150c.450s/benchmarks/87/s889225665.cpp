#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;

int stone[11][5];
int H;
int remove_impl(int a) {
    int res=0;
    bool f[5]={};
    rep(i,5) {
        int t = stone[a][i];
        int j=i+1;
        while(j!=5) {
            if(t!=stone[a][j]) break;
            j++;
        }
        if(j-i>=3) {
            res += (j-i)*t;
            for(int k=i;k<j;k++) stone[a][k]=0;
        }
    }
    return res;
}

void pack() {
    for(int i=H-2;i>=0;i--) {
        for(int j=4;j>=0;j--) {
            int pos=i;
            while(stone[pos+1][j]==0&&pos!=H-1) pos++;
            if(pos!=i) {
                stone[pos][j]=stone[i][j];
                stone[i][j]=0;
            }
        }
    }
}

int remove() {
    int res=0;
    rep(i,H) res+=remove_impl(i);
    pack();
    return res;
}
void plot() {
    cout<<endl;
    rep(i,H) {
        rep(j,5) cout<<stone[i][j]<<" ";
        cout<<endl;
    }
}

void solve() {
    rep(i,11) rep(j,5) stone[i][j]=0;
    rep(i,H) rep(j,5) cin>>stone[i][j];
    int ans=0;
    int t;
    while(1) {
        t=remove();
        if(t==0) break;
        // plot();
        ans+=t;
    }
    cout<<ans<<endl;

}

int main() {
    while(cin>>H) {
        if(H==0) break;
        solve();
    }
    return 0;
}