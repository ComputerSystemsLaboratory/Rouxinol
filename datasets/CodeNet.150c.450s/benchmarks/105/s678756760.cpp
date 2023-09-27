#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll read(){
	ll a=0,b=getchar(),c=1;
	while(!isdigit(b))c=b=='-'?-1:1,b=getchar();
	while(isdigit(b))a=a*10+b-'0',b=getchar();
	return a*c;
}
ll T,n,ans,a[205];
vector<ll> g;
string s;
int main(){
	T=read();
	while(T--){
		n=read(),ans=0;
		g.clear();
		for(int i=0;i<n;i++)
			a[i]=read();
		cin >> s;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<g.size();j++)
				a[i]=min(a[i],a[i]^g[j]);
			if(a[i]==0)continue;
			if(s[i]=='0')g.push_back(a[i]);
			else ans=1;
		}
		cout << ans << endl;
	}
	return 0;
}