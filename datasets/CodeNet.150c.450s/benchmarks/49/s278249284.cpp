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
    while (cin>>n && n){
        int sum=0 , h=0 , l=1000;
        REP(i,n){
            int s;
            cin >> s;
            sum+=s;
            h = max(h,s);
            l = min(l,s);
        }
        sum -= h+l;
        cout << sum/(n-2) << endl;
    }
    
    return 0;
}