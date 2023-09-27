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
vll s;
lli ans = 0;

vll marge_sort(lli from,lli to){
    if(to - from == 1) return vll{s[from]};
    vll r = marge_sort(from,(from+to)/2);
    vll l = marge_sort((from+to)/2,to);
    r.push_back(1000000000);
    l.push_back(1000000000);
    vll ret;
    for(lli i = from,j=0,k=0;i < to;i++){
        if(r[j] < l[k]) ret.push_back(r[j++]);
        else ret.push_back(l[k++]);
        ans++;
    }
    return ret;
}

int main(){
    cin >> n;
    s = vll(n);
    for(lli i = 0;i < n;i++) cin >> s[i];
    s = marge_sort(0,s.size());
    cout << s[0];
    for(lli i = 1;i < n;i++) cout << " " << s[i];
    cout << endl;
    cout << ans << endl;
    return 0;

}