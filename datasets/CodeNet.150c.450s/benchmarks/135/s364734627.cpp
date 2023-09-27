#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <cstring>
#include <functional>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define all(c) (c).begin(),(c).end()
#define fs first
#define sc second
#define pb push_back
#define show(x) cout << #x << " " << x << endl
map<int,int> a;
int main(){
	while(true){
		int n,m;
		cin>>n>>m;
		if(n==0) break;
		int h[1500],w[1500],sh[1501]={},sw[1501]={};
		a.clear();
		rep(i,n) cin>>h[i];
		rep(i,m) cin>>w[i];
		rep(i,n) sh[i+1]=sh[i]+h[i];
		rep(i,m) sw[i+1]=sw[i]+w[i];
		rep1(i,n) rep(j,i) a[sh[i]-sh[j]]++;
		long long ans=0;
		rep1(i,m) rep(j,i){
			int k=sw[i]-sw[j];
			ans+=a[k];
		}
		cout<<ans<<endl;
	}
}