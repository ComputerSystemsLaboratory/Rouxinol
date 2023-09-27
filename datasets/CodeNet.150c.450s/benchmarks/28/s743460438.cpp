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

lli n,k;
vll w;
priority_queue<lli,vector<lli>,greater<lli> > q;
lli ans;

int judge(lli m){
    lli t = 0;
    lli ret = 1;
    for(lli i = 0;i < n;i++){
        if(t + w[i] > m){
            ret++;
            t = w[i];
        }else{
            t += w[i];
        }
    }
    return ret;
}

int main(){
    cin >> n >> k;
    w = vll(n);
    for(lli i = 0;i < n;i++) cin >> w[i];
    lli h = 1000000000,l = *max_element(w.begin(),w.end()),m;
    while(h > l){
        m = (h+l) / 2;
        if(judge(m) > k) l = m+1;
        else h = m;
    }
    cout << h << endl;
    return 0;
}