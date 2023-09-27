
#include <bits/stdc++.h>

#define PI 3.14159265359
#define rep(i,a,n) for(int i=a;i<(int)n;++i)
#define SZ(x) ((int)(x).size())	//size() unsigned -> int
#define descSort(a) sort(a.begin(),a.end(),std::greater<int>())
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;

int main(void){
    ll n;
    cin>>n;
    cout<<n<<":";
    int N=n;
    vector<pair<int,int>> res;
    for(int i=2;i*i<=N;i++){
        int ex=0;
        while(n%i==0){
            ex++;
            n/=i;
        }
        res.push_back({i,ex});
    }
    if(n!=1)res.push_back({n,1});

    for(auto p:res){
        for(int i=0;i<p.second;i++)cout<<" "<<p.first;
    }
    cout<<endl;
}


