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
	int d[31]={},a;
	rep(i,0,28){
		cin>>a; d[a]=1;
	}
	rep(i,1,31){
		if(d[i]==0) o(i);
	}
}