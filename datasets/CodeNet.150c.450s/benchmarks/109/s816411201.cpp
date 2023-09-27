#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i,n) for(int i = 0; i < ((int)(n)); i++)

using namespace std;
typedef vector<int> vi;

int n, t;
string s;
vi TIME;
vi csum;
/*FUNCs=================================================*/
void solve() {

    TIME.assign(24*3600, 0);
    csum.assign(24*3600+1, 0);
    rep(i,n) {
        cin >> s;
        t = stoi(s.substr(0, 2))*3600 + stoi(s.substr(3, 2))*60 + stoi(s.substr(6,2));
        TIME[t] += 1;
        cin >> s;
        t = stoi(s.substr(0, 2))*3600 + stoi(s.substr(3, 2))*60 + stoi(s.substr(6,2));
        TIME[t] -= 1;
    }
    rep(i, 24*3600) csum[i+1] += csum[i] + TIME[i];
    sort(csum.rbegin(), csum.rend());
    cout << csum[0] << '\n';
}

/*MAIN==================================================*/
signed main(){

    while(cin >> n && n!=0) {
        solve();
    }

    return 0;
}
