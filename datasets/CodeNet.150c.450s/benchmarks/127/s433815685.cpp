#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
//#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
//#include<list>
#include<queue>
#include<deque>
#include<algorithm>
//#include<numeric>
#include<utility>
#include<complex>
//#include<memory>
#include<functional>
#include<cassert>
#include<set>

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef complex<double> C;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int m;
    cin >> m;
    while (m--) {
        string s;
        cin >> s;
        int n = s.size();
        set<string> S;
        for (int i = 1; i < n; i++) {
            string t = s.substr(0, i);
            string u = s.substr(i, n-i);
            string rt = t;
            string ru = u;
            reverse(rt.begin(), rt.end());
            reverse(ru.begin(), ru.end());
            S.insert(t+u);
            S.insert(t+ru);
            S.insert(rt+u);
            S.insert(rt+ru);
            S.insert(u+t);
            S.insert(u+rt);
            S.insert(ru+t);
            S.insert(ru+rt);
        }
        cout << S.size() << endl;
    }
    return 0;
}