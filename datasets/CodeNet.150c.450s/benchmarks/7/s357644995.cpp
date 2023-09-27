#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
using namespace std;
typedef long long int ll;
const int INF = 100000000;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int main(){
    const int n = 10;
    vector <int> m(n);
    rep(i, n) cin >> m[i];
    sort(m.begin(), m.end());
    for(int i = n-1; i >= n-3; --i){
        cout << m[i] << endl;
    }
    return 0;
}