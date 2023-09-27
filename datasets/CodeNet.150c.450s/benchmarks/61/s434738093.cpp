#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main(){
	int n,a,b,c,x;
	while(1){
		cin>>n>>a>>b>>c>>x;
		if(n+a+b+c+x==0) break;
		vi y(n);
		rep(i,0,n) cin>>y[i];
		int now=0,ans=-1;
		rep(i,0,10001){
			if(i) x=(a*x+b)%c;
			if(x==y[now]) now++;
			if(now==n){
				ans=i;
				break;
			}
		}
		o(ans);
	}
}