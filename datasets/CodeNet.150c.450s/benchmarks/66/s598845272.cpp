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
#include<stack>

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    set<string> S;
    for (int i = 0; i < N; i++) {
        string u;
        cin >> u;
        S.insert(u);
    }
    int M;
    cin >> M;
    bool open = false;
    while (M--) {
        string t;
        cin >> t;
        if (S.find(t) != S.end()) {
            if (!open) cout << "Opened by " << t << endl;
            else cout << "Closed by " << t << endl;
            open = !open;
        } else cout << "Unknown " << t << endl;
    }
    return 0;
}