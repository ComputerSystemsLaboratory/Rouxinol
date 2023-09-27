#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

signed main(){
	int n;
	string s;
	while(1){
		int l=0,r=0,ans=0,pre=0;
		cin>>n;
		if(n==0) break;
		rep(i,0,n){
			cin>>s;
			if(s=="lu") l=1;
			if(s=="ru") r=1;
			if(s=="ld") l=0;
			if(s=="rd") r=0;
			if(l==r && l!=pre){
				ans++;
				pre=l;
			}
		}
		o(ans);
	}
}