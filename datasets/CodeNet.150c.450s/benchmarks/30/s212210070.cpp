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
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    int ans = 0;
    REP(i,n){
        int mi = i;
        int j=i;
        while (j<n){
            if (a[j]<a[mi])
                mi=j;
            j++;
        }
        if (mi!=i){
            swap(a[i],a[mi]);
            ans++;
        }
    }
    REP(i,n){
        cout << a[i];
        if (i<n-1)
            cout << " ";
        else
            cout << endl;
    }

    cout << ans << endl;

    return 0;
}