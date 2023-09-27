#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
 
/* attention
    long longのシフト演算には気をつけよう
    タイポした時のデバッグが死ぬほどきつくなるので変数名は最低3字くらい使った方がいいかも
*/

bool linerSearch(vector<int> s, int key){
    for(int i=0; i<s.size(); i++){
        if(s[i] == key) return true;
    }

    return false;
}

int main(){
    int n; cin >> n;
    vector<int> s(n);
    for(int i=0; i<n; i++) cin >> s[i];

    int q; cin >> q;
    vector<int> t(q);
    for(int i=0; i<q; i++) cin >> t[i];

    int ans = 0;

    for(int i=0; i<q; i++){
        if(linerSearch(s, t[i])) ans++;
    }

    cout << ans << endl;
}
