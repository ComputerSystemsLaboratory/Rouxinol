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
lli ans = 0;
int main(){
    cin >> n;
    for(lli i = 0;i < n;i++){
        lli x;
        cin >> x;
        for(lli j = 2;j*j <= x;j++){
            if(x%j == 0){
                ans--;break;
            }
        }
        ans++;
    }
    cout << ans << endl;
}