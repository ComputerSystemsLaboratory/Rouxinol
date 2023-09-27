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

lli h;
vll a;


void max_heapify(lli i){
    lli l = i*2;
    lli r = i*2+1;
    lli est = max({i,r,l},[](lli s,lli t){
        if(s > h) return true;
        if(t > h) return false;
        return a[s] < a[t];
    });
    swap(a[i],a[est]);
    if(i != est) max_heapify(est);
}

int main(){
    cin >> h;
    a = vll(h+1);
    for(lli i = 1;i <= h;i++) cin >> a[i];
    for(lli i = h;i > 0;i--) max_heapify(i);
    for(lli i = 1;i <= h;i++) cout << " " << a[i];
    cout << endl;
    return 0;
}