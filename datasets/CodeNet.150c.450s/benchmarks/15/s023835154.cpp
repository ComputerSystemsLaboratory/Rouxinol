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

set<lli> a;
lli ans = 0;
lli n,q;

int main(){
    cin >> n;
    for(lli i = 0;i < n;i++){
        lli s;
        cin >> s;
        a.insert(s);
    }
    cin >> q;
    for(lli i = 0;i < q;i++){
        lli t;
        cin >> t;
        if(a.count(t)){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}