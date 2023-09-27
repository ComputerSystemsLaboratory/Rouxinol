#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; ++i)
        cin >> a[i];

    vector<long long> dp(21, 0);
    dp[a[0]] = 1;
    for(int i=1; i<n-1; ++i){
        vector<long long> nextDp(21, 0);
        for(int j=0; j<=20; ++j){
            if(j-a[i] >= 0)
                nextDp[j-a[i]] += dp[j];
            if(j+a[i] <= 20)
                nextDp[j+a[i]] += dp[j];
        }
        dp.swap(nextDp);
    }
    cout << dp[a[n-1]] << endl;
}