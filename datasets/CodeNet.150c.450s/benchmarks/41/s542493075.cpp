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

lli v,e;
mat m;

lli x,y,c;
const lli INF = 1000000000000;

int main(){
    cin >> v >> e;
    m = mat(v,vll(v,INF));
    for(lli i = 0;i < v;i++) m[i][i] = 0;
    for(lli i = 0;i < e;i++){
        cin >> x >> y >> c;
        m[x][y] = c;
    }
    for(lli i = 0;i < v;i++) for(lli j = 0;j < v;j++) for(lli k = 0;k < v;k++){
        if(m[j][i] == INF || m[i][k] == INF) continue;
        m[j][k] = min(m[j][k],m[j][i]+m[i][k]);
    }
    for(lli i = 0;i < v;i++) if(m[i][i] < 0){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for(lli i = 0;i < v;i++){
        for(lli j = 0;j < v;){
            if(m[i][j] == INF) cout << "INF";
            else cout << m[i][j];
            if(++j < v) cout << " ";
            else cout << endl;
        }
    }
    return 0;
}