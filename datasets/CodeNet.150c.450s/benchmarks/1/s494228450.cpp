#include <algorithm>
#include <cmath>
#include <ctime>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> seq(n);
    for (int i=0; i<n; ++i) {
        cin >> seq[i];
    }

    vector<ll> lis(n, INT_MAX);
    int ans = 0;
    for (int i=0; i<n; ++i) {
        vector<ll>::iterator pos = lower_bound(lis.begin(), lis.end(), seq[i]);
        *pos = seq[i];
        ans = max(ans, (int)(pos - lis.begin()) + 1);
    }

    cout << ans << endl;

    return 0;
}