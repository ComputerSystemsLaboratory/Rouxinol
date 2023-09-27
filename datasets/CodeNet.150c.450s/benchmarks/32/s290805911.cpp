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

    int m, mi, ma; cin >> m >> mi >> ma;
    if(m == 0) break;
    vector<int> p(m);
    for(int i = 0; i < m; i++) cin >> p[i];
    sort(p.rbegin(), p.rend());

    int ans = 0;
    int ans_n;

    for(int n = mi; n <= ma; n++){
        int tmp = 0;
        tmp = p[n - 1] - p[n];
        if(tmp >= ans){
            ans = tmp;
            ans_n = n;
        }
    }

    cout << ans_n << endl;
    }
    return 0;

}


