#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>

using namespace std;
#define int long long int
const int INF = 1001001001001001LL;
const int MOD = 1000000007;

signed main(){
    
    while(1){
        int n; cin >> n;
        if(!n) break;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int ans = INF;
        for(int i = 0; i < n - 1; i++){
            ans = min(ans, (int)abs(a[i + 1] - a[i]));
        }
        cout << ans << endl;
    }
    return 0;
}


