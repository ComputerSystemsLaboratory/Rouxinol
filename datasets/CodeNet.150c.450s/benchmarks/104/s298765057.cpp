#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int main() {
    int w, n;
    cin >> w >> n;
    VI a(w);
    REP(i,w) a[i] = i+1;
    while (n--){
        int x, y;
        scanf("%d,%d", &x, &y);
        swap(a[x-1], a[y-1]);
    }
    REP(i,w) cout << a[i] << endl;

    return 0;
}