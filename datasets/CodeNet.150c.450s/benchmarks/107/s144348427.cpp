#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <map>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define INF ((int)1e9)
#define INFLL ((ll)1e18)
#define MOD (1000000007LL)


int main(int argc, const char * argv[]) {
    string s1, s2;
    cin >> s1 >> s2;
    int DP[1001][1001];
    int L1 = s1.size(), L2 = s2.size();
    
    for (int l1 = 0; l1 <= L1; ++l1) {
        DP[l1][0] = l1;
    }
    for (int l2 = 0; l2 <= L2; ++l2) {
        DP[0][l2] = l2;
    }
    for (int l1 = 1; l1 <= L1; ++l1) {
        for (int l2 = 1; l2 <= L2; ++l2) {
            DP[l1][l2] = min(DP[l1-1][l2], DP[l1][l2-1]) + 1;
            if (s1[l1-1] == s2[l2-1]) {
                DP[l1][l2] = min(DP[l1-1][l2-1], DP[l1][l2]);
            } else {
                DP[l1][l2] = min(DP[l1][l2], DP[l1-1][l2-1] + 1);
            }
        }
    }
    cout << DP[L1][L2] << endl;

    return 0;
}

