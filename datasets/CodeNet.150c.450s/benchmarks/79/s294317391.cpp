#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdint>
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

const int inf=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > p;

int n,r;
void solve() {
    vector<int> hana;
    for(int i=n;i>=1;i--) hana.pb(i);
    rep(i,r) {
        int p,c;
        cin>>p>>c;
        vector<int> tmp;
        for(int i=0;i<p-1;i++) tmp.pb(hana[i]);
        for(int i=0;i<c;i++) hana[i] = hana[i+p-1];
        for(int i=c;i<c+p-1;i++) hana[i]=tmp[i-c];
        //rep(i,hana.size()) cout<<hana[i]<<" ";
        //cout<<endl;
    }
    cout<<hana[0]<<endl;
}
int main() {
    while(cin>>n>>r) {
        if(n+r==0) break;
        solve();
    }

    return 0;
}