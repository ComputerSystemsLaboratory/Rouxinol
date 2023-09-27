#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>
#include <utility>
#include <climits>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<long long > r(n);

    for(int i=0;i<n;i++){
        cin >> r[i];
    }
    
    long long mi = INT_MAX;
    long long ans = -INT_MAX;
    for(int i=0;i<n;i++){
        if(i!=0)
            ans = max(ans,r[i]-mi);
        mi = min(r[i],mi);
    }
    cout << ans << endl;
    return 0;
}