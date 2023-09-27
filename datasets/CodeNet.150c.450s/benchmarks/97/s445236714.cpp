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
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		vi a(n),b(n);
		rep(i,1,n){
			cin>>a[i]>>b[i];
		}
		vi x(n),y(n);
		x[0]=0; y[0]=0;
		int l=0,r=0,u=0,d=0;
		rep(i,1,n){
			if(b[i]==0){
				x[i]=x[a[i]]-1;
				y[i]=y[a[i]];
			}else if(b[i]==1){
				x[i]=x[a[i]];
				y[i]=y[a[i]]-1;
			}else if(b[i]==2){
				x[i]=x[a[i]]+1;
				y[i]=y[a[i]];
			}else if(b[i]==3){
				x[i]=x[a[i]];
				y[i]=y[a[i]]+1;
			}
			l=min(l,x[i]);
			r=max(r,x[i]);
			u=max(u,y[i]);
			d=min(d,y[i]);
		}
		o(r-l+1<<" "<<u-d+1);
	}
}