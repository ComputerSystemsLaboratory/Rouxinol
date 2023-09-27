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
vll a;
map<lli,lli> m;
vll ans;

int main(){
    cin >> n;
    a = vll(n);
    for(lli i = 0;i < n;i++) cin >> a[i];
    for(lli i = 0;i < n;i++){
        m[a[i]]++;
    }
    for(auto itr = m.begin();itr != m.end();itr++){
        for(lli i = 0;i < itr->second;i++){
            ans.push_back(itr->first);
        }
    }
    cout << ans[0];
    for(lli i = 1;i < ans.size();i++){
        cout << " " << ans[i];
    }
    cout << endl;
    return 0;
}