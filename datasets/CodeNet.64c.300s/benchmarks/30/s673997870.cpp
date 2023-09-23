#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pii;

int main(){
	while(1){
		int a,ans=0;
		cin>>a;
		if(a==0) break;
		a=1000-a;
		while(1){
			if(a==0) break;
			if(a>=500) a-=500;
			else if(a>=100) a-=100;
			else if(a>=50) a-=50;
			else if(a>=10) a-=10;
			else if(a>=5) a-=5;
			else if(a>=1) a-=1;
			ans++;
		}
		o(ans);
	}
}