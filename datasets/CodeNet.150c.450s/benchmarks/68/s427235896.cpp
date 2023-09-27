#include<bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n ; i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define whole(f, x, ...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x) // decltypeで型取得、引数があればva_argsのところに入れる
using namespace std;
typedef long long ll; // long longをllでかけるようにした
const int INF = 1e9;

int main(void){
    while(true){
        int n; cin >> n;
        if(n == 0) return 0;
        else{
            vector<int> score(n);
            REP(i, n) cin >> score[i];
            whole(sort, score);
            int ans = INF;
            REP(i, n - 1) ans = min(ans, score[i + 1] - score[i]);
            cout << ans << endl;
        }
    }
}
