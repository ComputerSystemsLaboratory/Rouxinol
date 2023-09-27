#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define ALL(a)  (a).begin(),(a).end()
#define PI 3.14159265358979
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const ll mod = 1e9+7LL;

int main() {
    int D; cin >> D;
    vector<int> c(26);
    rep(i, 26) cin >> c.at(i);
    vector<vector<int>> s(D, vector<int>(26));
    rep(i, D){
        rep(j, 26){
            cin >> s.at(i).at(j);
        }
    }
    vector<int> t(D);
    rep(i, D) cin >> t.at(i);

    vector<int> last(26);

    ll sc = 0;
    rep(i, D){
        int n = t.at(i)-1;
        sc += s.at(i).at(n);
        last.at(n) = i+1;
        rep(j, 26){
            sc -= c.at(j) * (i - last.at(j) + 1);
        }
        cout << sc << endl;
    } 
}