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
#define pi M_PI
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int main() {
    int h, w;
    while (cin >> h >> w && w > 0){
        int d = h*h + w*w;
        int x = 150, y, m = 1e9;
        FOR(i,1,150){
            FOR(j,1,i-1){
                int p = i*i + j*j;
                if (p == d && j > h && j < x){
                    m = p;
                    x = j;
                    y = i;
                }
                if (p > d && (p < m || (p == m && j < x))) {
                    m = p;
                    x = j;
                    y = i;
                }
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}