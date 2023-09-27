#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int b;
vector<int> c;

bool dfs(int i, int sum, int m) { // from ith
    if (i == b) return sum == m;
    if (dfs(i+1, sum+c[i], m) && sum <= m) return true;
    else return dfs(i+1, sum, m);
}

int main() {
    cin >> b;
    PUSH(b,c);
    
    int m;
    cin >> m;
    REP(i,m) {
        int j;
        cin >> j;
        if (dfs(0, 0, j)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    return 0;
}