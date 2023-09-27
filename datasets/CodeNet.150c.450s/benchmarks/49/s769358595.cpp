#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,a,b) for(int i=(a); i<(b); i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
const int IMAX=((1<<30)-1)*2+1;
const double EPS=1e-10;
//int mod=1000000007;




int main(){
	int n;
	vi v;
	while(cin>>n){
		if(n==0)break;
		v.clear();
		rep(i,n){
			int a;
			cin>>a;
			v.pb(a);
		}
		sort(all(v));
		int sum=0;
		repc(i,1,n-1){
			sum+=v[i];
		}
		//cout<<sum<<" "<<n-2<<endl;
		cout<<(int)sum/(n-2)<<endl;
	}
}