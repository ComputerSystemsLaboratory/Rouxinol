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
    int n, s = 196471;
    cin >> n;
    while (n--){
        int y, m, d;
        cin >> y >> m >> d;
        FOR(i,1,y-1){
            if (i % 3 == 0) d += 200;
            else d += 195;
        }
        FOR(i,1,m-1){
            if (y % 3 == 0 || i % 2 == 1) d += 20;
            else d += 19;
        }
        cout << s - d << endl;
    }


    return 0;
}