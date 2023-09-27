#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<cmath>
#include<iomanip>
#include<set>
#include<numeric>
#include<sstream>
#include<random>
#include<cassert>
#include<complex>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int inf = 1e9 + 7;
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, 1, -1};
#define ceil(a, b) a / b + !!(a % b)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int keta(int x) {
    int c = 0;
    if (x == 0) return 1;
    while (x) {
        x /= 10;
        c++;
    }
    return c;
}
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int a0, l;
    while (cin >> a0 >> l && (a0 || l)) {
        set<int> st;
        vector<int> v;
        int flg = 0;
        while (1) {
            string s;
            rep(i, l - keta(a0)) {
                s += '0';
            }
            s += to_string(a0);
            if (flg == 0) {v.push_back(stoi(s)); st.insert(stoi(s)); /*cout << "init " << s << endl;*/}
            flg = 1;
            sort(s.begin(), s.end());
            int mmin = stoi(s);
            sort(s.begin(), s.end(), greater<char>());
            int mmax = stoi(s);
            int dif = mmax - mmin;
            //cout << "dif " << dif << endl;
            if (st.find(dif) == st.end()) {
                st.insert(dif);
                v.push_back(dif);
            } else {
                rep(i, v.size()) if (v[i] == dif) {
                    cout << i << " ";
                    cout << dif << " ";
                    cout << v.size() - i << endl;
                }
                break;
            }
            a0 = dif;
        }
    }
}

