#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)

typedef long long ll;

int main(void) {
    int n;
    cin >> n;
    int mi, ans=-1e9;
    cin >> mi;
    REP(i,n-1){
        int r;
        cin >> r;
        ans = max(ans,r-mi);
        mi = min(mi,r);
    }

    cout << ans << endl;

    return 0;
}