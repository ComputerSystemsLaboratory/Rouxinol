#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

map<int, bool> mp;
int cnt4;

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        int j;
        cin >> j;
        mp[j] = true;
    }
    
    int m;
    cin >> m;
    REP(i,m) {
        int j;
        cin >> j;
        if (mp[j]) cnt4++;
    }

    cout << cnt4 << endl;
    
    return 0;
}