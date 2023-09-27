#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll b[110],T,n,a[210],ans;
string s;
int que(ll x){
	for (int i=60;i>=0;i--)if (x&((1ll)<<i))x^=b[i];
	return (x!=0);
}
void add(ll x){for (int i=60;i>=0;i--){if (x&((1ll)<<i)){if (b[i]==0){b[i]=x;return ;}x^=b[i];}}}
int main(){
	cin>>T;
	while (T--){
		cin>>n;ans=0;
		memset(b,0,sizeof(b));
		for (int i=1;i<=n;i++)cin>>a[i];
		cin>>s;
		for (int i=n;i>=1;i--){
			if (s[i-1]=='0')add(a[i]);
			else ans=ans|que(a[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}