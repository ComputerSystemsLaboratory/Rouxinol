#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef complex<double> Point;

#define PI acos(-1.0)
#define EPS 1e-10
const ll INF = 1e16;
const ll MOD = 1e9 + 7;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,N) for(int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) ( EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()) )
#define fi first
#define se second
#define N_SIZE (1LL << 20)
#define NIL -1

string S;
ll L;
vector<string> ss;

ll stringtoi(string s){
    ll res = 0;
    rep(i,s.size()){
        res *= 10;
        res += (s[i] - '0');
    }
    return res;
}

string itos(ll num){
    string res = "";
    rep(i,L){
        res += (char)(num % 10 + '0');
        num /= 10;
    }
    reverse(ALL(res));
    return res;
}

string calc(string a){
    sort(ALL(a));
    ll tmp1 = stringtoi(a);
    reverse(ALL(a));
    ll tmp2 = stringtoi(a);
    return itos(tmp2 - tmp1);
}

int main(){
    while(cin >> S >> L){
        if(S == "0" && L == 0)break;
        ss.clear();
        while(S.size() < L){
            S = "0" + S;
        }
        ss.push_back(S);
        while(1){
            string t = calc(S);
            // cout << "!" << t << endl;
            auto it = find(ALL(ss),t);
            if(it != ss.end()){
                ll j = it - ss.begin();
                cout << j << " " << stringtoi(t) << " " << ss.size() - j << endl;
                break;
            }
            ss.push_back(t);
            S = t;
        }
    }
}
