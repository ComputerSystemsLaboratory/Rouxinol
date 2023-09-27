#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int gcd(int a,int b){
	if(a<b) swap(a,b);
	if(b==0) return a;
	return gcd(b,a%b);
}

int lcm(int a,int b){
	return a*b/gcd(a,b);
}

signed main(){
	int a,b;
	while(cin>>a>>b){
		o(gcd(a,b)<<" "<<lcm(a,b));
	}
}