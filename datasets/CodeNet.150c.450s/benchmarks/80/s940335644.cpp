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
	int s=0,t=0,a;
	rep(i,0,4){
		cin>>a; s+=a;
	}
	rep(i,0,4){
		cin>>a; t+=a;
	}
	o(max(s,t));
}