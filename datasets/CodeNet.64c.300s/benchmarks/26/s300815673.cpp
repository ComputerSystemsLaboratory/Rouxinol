#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
#include<bitset>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
/*O(log(n))??則x^n????賊????????????即????????\???*/
const ll mod = 1000000007;
ll mod_pow(ll x,ll n){
	ll res =1;
	while(n>0){
		if(n&1)res =res*x%mod;
		x= x*x%mod;
		n>>=1;
	}
	return res;
}

int main(){
	ll x,y;
	cin>>x>>y;
	cout <<mod_pow(x,y)<<endl;
	return 0;
}