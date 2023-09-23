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

bool isprime(int x){
    if (x<=1) return false;
    FOR(i,2,sqrt(x)){
        if (x%i==0)
            return false;
    }
    return true;
}

int main(void) {
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        int a;
        cin >> a;
        ans += isprime(a);
    }

    cout << ans << endl;

    return 0;
}