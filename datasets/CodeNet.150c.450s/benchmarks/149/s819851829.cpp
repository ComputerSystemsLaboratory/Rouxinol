#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) r.begin(),r.end()

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,a,b) for(int i=(a); i<=(b); i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
const int IMAX=((1<<30)-1)*2+1;
const double EPS=1e-10;
//int mod=1000000007;

vi v(10010);

void init(int n){
	rep(i,n)v[i]=i;
}

int root(int a){
	if(v[a]==a)return a;
	return (v[a]=root(v[a]));
}

void unite(int a,int b){
	v[root(a)]=root(b);
}

bool same(int a,int b){
	return root(a)==root(b);
}

int main(){
	int n,q,c,x,y;
	cin>>n>>q;
	init(n);
	for(int i=0; i<q; i++){
		cin>>c>>x>>y;
		if(c==0)unite(x,y);
		else cout<<(same(x,y)?1:0)<<endl;
	}
}