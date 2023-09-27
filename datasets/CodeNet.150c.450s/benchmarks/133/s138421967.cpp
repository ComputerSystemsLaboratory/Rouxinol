#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const int INF = 1000000000;

int main() {
    int D;
    cin >> D;
    vector<int>cs(26);
    vector<vector<int>>sds(D, vector<int>(26));
    for (int i=0; i<26; i++)cin >> cs[i];

    for (int i=0; i<D; i++){
        for (int j=0; j<26; j++){
            cin >> sds[i][j];
        }
    }

    vector<int>ts(D);
    for (int i=0; i<D; i++)cin >> ts[i];
    vector<int>lds(26);

    int stf = 0;
    for (int i=0; i<D; i++){
        int ti = ts[i];
        ti--;
        stf += sds[i][ti];
        lds[ti] = i+1;
        int cnt = 0;
        for (int j=0; j<26; j++){
            cnt += cs[j] * (i+1-lds[j]);
        }
        stf -= cnt;
        cout << stf << endl;

    }

}