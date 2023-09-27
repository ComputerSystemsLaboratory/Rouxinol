#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}
void print() { cout << "\n"; }
template <class T> void print(const T &x) { cout << x << "\n"; }
template <class T, class... Args> void print(const T &x, const Args &... args) {
    cout << x << " ";
    print(args...);
}
template <class T> void printVector(const vector<T> &v) {
    for(const T &x : v) {
        cout << x << " ";
    }
    cout << "\n";
}
using ll = long long;

#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
const double EPS = 1e-7;
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
const double PI = acos(-1);
constexpr int MOD = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//-------------------------------------

using P = pair<int, int>;

vector<int> imos(100000, 0);

bool solve() {
    int n;
    cin >> n;
    if(n == 0) {
        return false;
    }
    imos.assign(100000, 0);
    for(int i = 0; i < n; i++) {
        string s, e;
        cin >> s >> e;
        // print(s.substr(0, 2), s.substr(3, 2), s.substr(6, 2));
        int l = stoi(s.substr(0, 2)) * 3600 + stoi(s.substr(3, 2)) * 60 +
                stoi(s.substr(6, 2));
        int r = stoi(e.substr(0, 2)) * 3600 + stoi(e.substr(3, 2)) * 60 +
                stoi(e.substr(6, 2));
        imos[l]++;
        imos[r]--;
    }
    for(int i = 1; i < 100000; i++) {
        imos[i] += imos[i - 1];
    }
    print(*max_element(ALL(imos)));
    return 1;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(1) {
        if(!solve()) {
            break;
        }
    }
}
