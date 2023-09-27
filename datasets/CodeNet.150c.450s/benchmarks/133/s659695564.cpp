#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<functional>
#include<math.h>
using namespace std;
#define N (1000000000+7)
#define M 998244353
#define INF 1e16
typedef long long ll;
typedef pair<ll,ll> P;
 
ll A(ll x){
    if(x>=0)return x;
    else return -x;
}
 
ll gcd(ll a, ll b) {
	if (b > a) {
		ll tmp = b;
		b = a;
		a = tmp;
	}
	if (a%b == 0)return b;
	else return gcd(b, a%b);
}

ll c[27];
ll s[400][27];
ll last[27];
ll score[27];

int main(void){
	int D;
	cin>>D;
	for(int i=1;i<=26;i++)cin>>c[i];
	for(int i=1;i<=D;i++){
		for(int j=1;j<=26;j++){
			cin>>s[i][j];
		}
	}
	for(ll d=1;d<=D;d++){
		ll t;
		cin>>t;
		last[t]=d;
		score[t]+=s[d][t];
		ll ans = 0;
		for(ll j=1;j<=26;j++){
			score[j]-=c[j]*(d-last[j]);
			ans+=score[j];
		}
		cout<<ans<<endl;
	}
    return 0;
}