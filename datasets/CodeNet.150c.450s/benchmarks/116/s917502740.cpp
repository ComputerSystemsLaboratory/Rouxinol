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
	int n,k;
	while(1){
		cin>>n>>k;
		if(n+k==0) break;
		vi a(n);
		rep(i,0,n) cin>>a[i];
		int sum=0;
		rep(i,0,k) sum+=a[i];
		int MAX=sum;
		rep(i,k,n){
			sum=sum+a[i]-a[i-k];
			MAX=max(MAX,sum);
		}
		o(MAX);
	}
}