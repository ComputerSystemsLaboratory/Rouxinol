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
	int n,m,p;
	while(1){
		cin>>n>>m>>p;
		if(n+m+p==0) break;
		int sum=0,win;
		rep(i,1,n+1){
			int a;
			cin>>a;
			sum+=a;
			if(i==m) win=a;
		}
		o((win==0?0:(100-p)*sum/win));
	}
}