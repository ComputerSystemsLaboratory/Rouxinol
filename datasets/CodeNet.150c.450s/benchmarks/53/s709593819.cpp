//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
using in = int64_t;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
const double PI=3.14159265358979323846;
const in MOD = 1000000007;
const in INF=1<<30;
using P=pair<int,int>;
vector<int> dx={0,1,-1,0};
vector<int> dy={1,0,0,-1};

map<int,int> soin(int n){
    map<int,int> ret;
    for(int i=2;i*i<=n;i ++){
        while(n%i==0){
            ret[i] ++;
            n /= i;
        }
    }
    if(n!=1) ret[n]=1;
    return ret;
}

int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
cout << fixed << setprecision(10);
    int n;
    cin>>n;
    cout<<n<<":";
    auto x=soin(n);
    for(auto y: x){
        rep(i,y.second) cout<<" "<<y.first;
    }
    cout<<endl;
}
