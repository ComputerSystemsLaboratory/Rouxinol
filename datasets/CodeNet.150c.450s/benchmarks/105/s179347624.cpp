#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <map>
#include <numeric>
#include <functional>
#include <math.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

#define INF ((int)1e9)
#define INFLL ((ll)1e18)
#define MOD (1000000007LL)


int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<ll> A(N);
        for (int n = 0; n < N; ++n) {
            cin >> A[n];
        }
        string S;
        cin >> S;
        set<ll, greater<ll>> Set;
        for (int n = N-1; n >= 0; --n) {
            if (S[n] == '0') {
                ll Tmp = A[n];
                for (auto s : Set) {
                    Tmp = min(Tmp, Tmp^s);
                }
                if (Tmp) {
                    Set.insert(Tmp);
                }
            } else {
                ll Tmp = A[n];
                for (auto s : Set) {
                    Tmp = min(Tmp, Tmp^s);
                }
                if (Tmp) {
                    Set.clear();
                    break;
                }
            }
        }
        if (Set.empty()) {
            cout << '1' << endl;
        } else {
            cout << '0' << endl;
        }
    }

    return 0;
}
