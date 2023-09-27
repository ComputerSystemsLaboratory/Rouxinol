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
	int n,m;
	while(1){
		cin>>n;
		if(n==0) break;
		string s;
		char in,b[100],a[100];
		rep(i,0,n){
			cin>>b[i]>>a[i];
		}
		cin>>m;
		rep(i,0,m){
			cin>>in;
			rep(j,0,n){
				if(in==b[j]){
					in=a[j]; break;
				}
			}
			s+=in;
		}
		o(s);
	}
}