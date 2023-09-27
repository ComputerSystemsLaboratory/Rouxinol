#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i,0,n)
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vvvi = vector<vector<vector<int>>>;
using mii = map<int, int>;
using msi = map<string, int>;
using pii = pair<int, int>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << std::fixed << std::setprecision(10);
    
    int a, b, c; cin >> a >> b >> c;
    if(a < b && b < c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
