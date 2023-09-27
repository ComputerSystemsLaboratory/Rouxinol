#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <functional>
#include <utility>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)
#define all(x) (x).begin, (x).end()
#define SORT(v,n) sort(v,v+n)
#define VSORT(v) sort(all(x))
#define inf 999999999
#define debug(x) cout<<#x<<":"<<x<<endl;
#define min(a,b) ((a)>(b)?(b):(a))
#define max(a,b) ((a)>(b)?(a):(b))
#define pi 2*acos(0.0)
#define in scanf
#define out printf
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define true 1
#define false 0

// --
#define bit(n) (1LL<<(n)) // ???bit?????????
// --

using namespace std;

typedef long long llong;
typedef pair<int, int> pii;
typedef pair<llong, llong> pll;
typedef pair<llong, pll> plp;

typedef pair<string, int> psi;

const int MOD=1000000007;
const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};  // ????????????


int main(int argc, char**argv){
    int n, q, sum = 0;
    cin >> n >> q;
    queue<psi> que;
    REP(i, n){
        psi p;
        cin >> p.first >> p.second;
        que.push(p);
    }
    while(!que.empty()){
        psi p = que.front();
        que.pop();
        if (p.second <= q){
            sum += p.second;
            cout << p.first << " " << sum << endl;
        }else {
            sum += q;
            p.second -= q;
            que.push(p);
        }
    }
    return 0;
}