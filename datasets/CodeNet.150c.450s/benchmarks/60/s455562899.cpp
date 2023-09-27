#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long lli;
typedef vector<lli> vll;
typedef vector<bool> vbl;
typedef vector<vector<lli> > mat;
typedef vector<vector<bool> > matb;
typedef vector<string> vst;
typedef pair<lli,lli> pll;
typedef pair<double,double> pdd;

lli n;
lli u,k,v;

matb g;

int main(){
    cin >> n;
    g = matb(n+1,vbl(n+1));
    for(lli i = 0;i < n;i++){
        cin >> u >> k;
        for(lli j = 0;j < k;j++){
            cin >> v;
            g[u][v] = true;
        }
    }
    for(lli i = 1;i <= n;i++){
        for(lli j = 1;j <= n;j++){
            cout << g[i][j];
            if(j == n) cout << endl;
            else cout << " ";
        }
    }
    return 0;
}