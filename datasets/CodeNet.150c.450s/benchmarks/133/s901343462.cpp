#include <functional>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <random>
#include <bitset>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
typedef long long ll;
using namespace std;
const ll MOD = 1000000007LL;

int main() {
    int D;
    cin >> D;
    vector<int> c(26);
    for (int i = 0; i < 26; i++) cin >> c[i];
    vector<vector<int>> s(D, vector<int>(26));
    for (int i = 0; i < D; i++) {
        for (int j = 0; j < 26; j++) {
            cin >> s[i][j];
        }
    }
    int ans = 0;
    vector<int> last(26, -1);
    for (int i = 0; i < D; i++) {
        int t;
        cin >> t;
        t--;
        ans += s[i][t];
        last[t] = i;
        for (int k = 0; k < 26; k++) ans -= c[k] * (i - last[k]);
        cout << ans << endl;
    }
    return 0;
}