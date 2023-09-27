#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main(){
	while(1){
		int a,ans=0,m[6]={500,100,50,10,5,1};
		cin>>a;
		if(a==0) break;
		a=1000-a;
		while(1){
			if(a==0) break;
			rep(i,0,6){
				if(a>=m[i]){
					ans++; a-=m[i]; break;
				}
			}
		}
		o(ans);
	}
}