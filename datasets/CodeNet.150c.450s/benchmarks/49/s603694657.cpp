#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <string>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define endl '\n'
const int INF = (1 << 30);
using namespace std;
typedef long long int ll;

bool solve(){
    int n, smax=0, smin=INF, sum=0, s;
    cin >> n;
    if(!n) return false;
    REP(i,n){
        cin >> s;
        smax = max(s, smax);
        smin = min(s, smin);
        sum += s;
    }
    cout << (sum - smin - smax) / (n-2) << endl;
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(solve());
}