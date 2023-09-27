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
vector<int> x,y;
const int inf=1e6;
int a[inf],b[inf];
int main(){
	for(int i=1;;i++){
		int p=i*(i+1)*(i+2)/6;
		if(p>=inf) break;
		x.pb(p);
		if(p%2) y.pb(p);
	}
	rep(i,inf) a[i]=b[i]=inf;
	a[0]=0,b[0]=0;
	for(int p:x){
		rep(i,inf-p){
			a[i+p]=min(a[i+p],a[i]+1);
		}
	}
	for(int p:y){
		rep(i,inf-p){
			b[i+p]=min(b[i+p],b[i]+1);
		}
	}
	while(true){
		int n;
		cin>>n;
		if(n==0) break;
		cout<<a[n]<<" "<<b[n]<<endl;
	}
}