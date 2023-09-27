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
typedef pair<string,lli> psl;

lli n,q;
queue<psl> que;
lli t = 0;

int main(){
    cin >> n >> q;
    for(lli i = 0;i < n;i++){
        string n;
        lli t;
        cin >> n >> t;
        que.push(psl(n,t));
    }
    while(!que.empty()){
        psl p = que.front();
        que.pop();
        p.second -= q;
        t += q;
        if(p.second <= 0){
            t += p.second;
            cout << p.first << " " << t << endl;
        }else{
            que.push(p);
        }
    }
    return 0;
}