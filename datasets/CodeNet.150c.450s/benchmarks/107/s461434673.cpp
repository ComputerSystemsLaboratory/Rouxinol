#include <bits/stdc++.h>
#include <cmath>

using namespace std;
typedef long long ll;
//typedef unsigned long long ll;

#define rep(i, n) for (int i = 0; i < (n); ++i)
//#define rep(i, n) for (ll i = 0; i < (n); ++i)
//#define sz(x) ll(x.size())
//typedef pair<ll, int> P;
typedef pair<ll, ll> P;
//const double INF = 1e10;
const ll INF = LONG_LONG_MAX / 10;
//const ll INF = (1ll << 31) - 1;
//const ll INF = 1e15;
const ll MINF = LONG_LONG_MIN;
//const int INF = INT_MAX / 10;
#define cmin(x, y) x = min(x, y)
#define cmax(x, y) x = max(x, y)
//typedef pair<int, int> P;
//typedef pair<double, double> P;

bool contain(set<P> &s, P a) { return s.find(a) != s.end(); }

//ifstream myfile("C:\\Users\\riku\\Downloads\\0_00.txt");
//ofstream outfile("log.txt");
//outfile << setw(6) << setfill('0') << prefecture << setw(6) << setfill('0') << rank << endl;
// std::cout << std::bitset<8>(9);


void print_line(vector<ll> &line) {
    if (line.size() == 0ll) {
        cout << endl;
        return;
    }
    for (ll i = 0; i < line.size(); i++) {
        cout << line[i];
        if (i == line.size() - 1) cout << endl;
        else cout << ' ';
    }
}


typedef priority_queue<long long, vector<long long>, greater<long long>> PQ_ASK;
const int mod = 1000000007;
#define index_of(as, x) distance(as.begin(), lower_bound(as.begin(), as.end(), x))

int levenshtein_distance(string x, string y) {

    vector<vector<int>> LP(x.size() + 1, vector<int>(y.size() + 1, 0));

    for (int j = 1; j <= x.size(); j++) LP[j][0] = j;
    for (int k = 1; k <= y.size(); k++) LP[0][k] = k;

    //aをbに近づけたい!
    for (int j = 1; j <= x.size(); j++) {
        for (int k = 1; k <= y.size(); k++) {
            //a[j]を削除するか、a[j+1]にb[k]と同じ文字を挿入するか
            //上記２つの行為の回数で最小な方を採用
            int m = min(LP[j - 1][k] + 1, LP[j][k - 1] + 1);
            if (x[j - 1] == y[k - 1]) {
                //最後の文字が同じだから最後の文字がなくても編集距離は同じ
                m = min(m, LP[j - 1][k - 1]);
                LP[j][k] = m;
            } else {
                //最後の文字を置換する
                m = min(m, LP[j - 1][k - 1] + 1);
                LP[j][k] = m;
            }
        }
    }
    return LP[x.size()][y.size()];
}

int main() {

    string s, t;
    cin >> s >> t;
    cout << levenshtein_distance(s, t) << endl;

}


