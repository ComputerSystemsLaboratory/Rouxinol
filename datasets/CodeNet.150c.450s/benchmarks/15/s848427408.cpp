#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
//template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
 
/* attention
    long longのシフト演算には気をつけよう
    タイポした時のデバッグが死ぬほどきつくなるので変数名は最低3字くらい使った方がいいかも
    sizeは(int)とキャストしよう
    ごちゃごちゃ場合分けを考える前に全探索は考えましたか？
*/

bool serch(vector<int> &a, int q){
    for(int i=0; i<a.size(); i++){
        if(a[i] == q) return true;
    }
    return false;
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int q; cin >> q;
    vector<int> t(q);
    for(int i=0; i<q; i++) cin >> t[i];

    int ans = 0;
    for(int i=0; i<q; i++){
        if(serch(a, t[i])) ans++;
    }

    cout << ans << endl;

}
