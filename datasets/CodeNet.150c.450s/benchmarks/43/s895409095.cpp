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
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		int a,b,sa=0,sb=0;
		rep(i,0,n){
			cin>>a>>b;
			if(a>b) sa+=a+b;
			else if(a<b) sb+=a+b;
			else{
				sa+=a; sb+=b;
			}
		}
		o(sa<<" "<<sb);
	}
}