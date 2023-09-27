#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=1234567;
const ll INF=1000000010;
const ll LINF=1000000000000000010LL;
const int MAX=10000010;
const double EPS=1e-3;
int dx[4]={0,1,0,1};
int dy[4]={0,0,1,1};
//階乗
ll fact(int n){
    if(n==1){
        return 1;
	}
    ll res=n;
    res*=fact(n-1);
    return res;
}
int main(){
	int n;cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}

