#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
#include <climits>
using namespace std;

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define RREP(i,n) for(int i=(int)n-1; i>=0; i--)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define RFOR(i,c) for(__typeof((c).rbegin())i=(c).rbegin();i!=(c).rend();++i)
#define ALL(c) (c).begin(), (c).end()

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int> > pipii;
typedef vector<int> vi;

const int INF = 1e9;
const int MOD = 1e9+7;

int main(void){
    int n;
    while(cin >> n, n){
        vector<string> a(n);
        REP(i, n) cin >> a[i];
        int ans = 0;
        REP(i, n-1){
            if(a[i] == "lu" && a[i+1] == "ru") ans++;
            if(a[i] == "ld" && a[i+1] == "rd") ans++;
            if(a[i] == "ru" && a[i+1] == "lu") ans++;
            if(a[i] == "rd" && a[i+1] == "ld") ans++;
        }
        cout << ans << endl;
    }
    return 0;
}