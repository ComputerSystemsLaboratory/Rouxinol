#include <iostream>
#include <vector>
#include <algorithm>
#define pb(a) push_back(a) 
#define rep(i,a,n) for(int i=a; i<n; i++)
using namespace std;
 
int main() {
    int n = 1000000;
    vector<int> v;
    v.pb(2);
    for(int i=3;i<=n;i+=2) {
        bool add = true;
        rep(j,0,v.size()) {
            if(v[j] * v[j] > i) break;
            if(i % v[j] == 0) {
                add = false; 
                break;
            }
        }
        if(add) v.pb(i);
    }

    int m;
    while(cin >> m) {
        cout << upper_bound(v.begin(), v.end(), m) - v.begin() << endl;
    }
    return 0;
}