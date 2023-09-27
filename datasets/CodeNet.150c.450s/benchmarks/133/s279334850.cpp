#include <bits/stdc++.h>
#define repp(i,l,r)for(long long i=(l);i<(r);i++)
#define rep(i,n) for (long long i = 0; i < (n); ++i)
#define per(i,n) for (long long i = (n); i >= 0; --i)
const int INF = 2147483647;//int max
const long long int MOD = 1000000007;
using namespace std;
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

void scoring(int &score , int choose, int day, vector<int> &c,vector<vector<int>> &s,vector<int> &last){
    --choose;
    score += s[day][choose];
    int hiku = 0;
    ++day;
    last[choose] = day;
    rep(i,26){
        hiku += c[i]*(day - last[i]);
    }
    score -= hiku;
    return;
}

//ミョ(-ω- ?)
int main() {
    int d;
    cin >> d;
    const int n = 26;
    vector<int> c(n,0);
    rep(i,n)cin >> c[i];
    vector<vector<int>> s(365,vector<int>(n,0));
    rep(i,d)rep(j,n)cin >> s[i][j];

    vector<int> t(d);
    vector<int> last(n,0);
    int score = 0;
    cerr << endl;
    rep(i,d){
        cin >> t[i];
        scoring(score,t[i],i,c,s,last);
        cout << score << endl;
    }

    return 0;
}