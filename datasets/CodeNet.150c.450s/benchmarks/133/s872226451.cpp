#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rrep(i,n) for (int i = (int)(n)-1; i>=0; --i)
#define For(i,a,b) for(auto i=(a);i<=(b);++i)
#define rFor(i,a,b) for(auto i=(b);i>=(a);--i)
#define call(var) cerr<<#var<<"="<<var<<"\n";
#define dup(x,y) (((x)+(y)-1)/(y))
#define all(x) (x).begin(),(x).end()
using ll=long long;
using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using Graph = vector<vi>;
using P = pair<int,int>;
const int MOD=(int)1e9+7;
const int INF=(int)1e9;
const ll LINF=(ll)1e18;
const double pi = acos(-1);
template<class t,class u> inline bool chmax(t&a,u b){if(a<b){a=b;return true;}return false;}
template<class t,class u> inline bool chmin(t&a,u b){if(b<a){a=b;return true;}return false;}
template<class T> istream& operator>>(istream& is, vector<T>& a){rep(i,a.size()) is >> a[i]; return is;}
template<class T> ostream& operator<<(ostream& os, vector<T>& a){rep(i,a.size()) os << a[i] << " "; return os;}
template<class T, class U> istream& operator>>(istream& is, pair<T,U>& p){is >> p.first >> p.second; return is;}
template<class T, class U> ostream& operator<<(ostream& os, const pair<T,U>& p){os << "("<< p.first << "," << p.second << ")"; return os;}
template<class T, class U> ostream& operator<<(ostream& os, const map<T,U>& mp){for(auto& t : mp) os << t.first << " " << t.second << "\n"; return os;}

int D;
vi c(26+1);
// D+1 * 26+1 vec
vector<vi> s;
// 1 ~ 26 のコンテストnumber
vi output;
// 1 ~ 26 のコンテストについて最後に開催した日
vector<set<int>> last_day(26+1);

void init(){
    cin >> D;
    rep(i,26) cin >> c[i+1];
    s.resize(D+1, vi(26+1));
    rep(i,D) rep(j,26) cin >> s[i+1][j+1];
    output.resize(D+1);
    for(int i=1;i<=26;++i) last_day[i].insert(0);
}

int last(int d, int i){
    // d日目より前にタイプiのコンテストを開催した日
    auto it = last_day[i].end();
    it = prev(it, 1);
    while(*it != 0 && *it > d){
        it = prev(it, 1);
        // cout << *it << "\n";
    }
    return *it;
}

ll calScore(){
    ll ret = 0;
    vi b_ret(D+1);
    for(int i=1;i<=D;++i){
        b_ret[i] = b_ret[i-1];
        // コンテスト開催による加算
        ret += s[i][output[i]];
        b_ret[i] += s[i][output[i]];

        // コンテスト非開催による減算
        for(int j=1;j<=26;++j){
            if(j == output[i]) continue;
            ret -= c[j] * (i - last(i, j));
            b_ret[i] -= c[j] * (i - last(i, j));
        }
    }   

    // B_ret
    cerr << "----B_ret----\n";
    for(int i=1;i<=D;++i){
        cout << b_ret[i] << "\n";
    }
    return ret;
}

int loss_calc(int a, int b, int i){
    return (b-a-1) * (b-a) / 2 * c[i];
}

int delete_ld(int i, int d){
    // コンテストiからdを消す
    auto itr_d = last_day[i].find(d);
    auto pre_d = prev(itr_d, 1);
    auto aft_d = next(itr_d, 1);

    last_day[i].erase(d);
    int ret = -loss_calc(*itr_d, *pre_d, i) - s[d][i] + loss_calc(*aft_d, *pre_d, i);
    return ret;
}

int add_ld(int i, int d){
    // コンテストiにdを追加する
    auto pre_d = lower_bound(all(last_day[i]), d);
    auto aft_d = next(pre_d, 1);

    last_day[i].insert(d);
    int ret = -loss_calc(*pre_d, *aft_d, i) + loss_calc(*pre_d, d, i) + loss_calc(*aft_d, d, i) - s[d][i];
    return ret;
}

int change_last_day(int d, int to){
    int from = output[d];
    int ret = delete_ld(from, d) + add_ld(to, d);
    return ret;
}

int main(){
    init();
    rep(i,D) cin >> output[i+1];

    
    for(int i=1;i<=D;++i){
        last_day[output[i]].insert(i);
    }
    for(int i=1;i<=26;++i){
        // 番兵として最終日を入れると最終日の選択とかぶる
        // D+1を入れておきたい
        last_day[i].insert(D+1);
    }
    calScore();

    // int M;cin >> M;
    // int score = calScore();
    // while(M--){
    //     int d,q;cin >> d >> q;
    //     score += change_last_day(d, q);
    //     cout << score << "\n";
    // }
}