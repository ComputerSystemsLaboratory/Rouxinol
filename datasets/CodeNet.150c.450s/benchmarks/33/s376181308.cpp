#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);++i)
#define rep1(i,n) for(int i=1;i<=(n);++i)
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define fs first
#define sc second
#define show(x) cout << #x << " = " << x << endl
int main(){
	while(true){
		int x,y,s,mx=0;
		cin>>x>>y>>s;
		if(s==0) break;
		int k[1010];
		rep(i,s+1) k[i]=i*(100+x)/100;
		rep1(i,s-1){
			int id=lower_bound(k,k+s+1,i)-k;
			if(k[id]!=i) continue;
			int id2=lower_bound(k,k+s+1,s-i)-k;
			if(k[id2]!=s-i) continue;
			mx=max(mx,id*(100+y)/100+id2*(100+y)/100);
		}
		cout<<mx<<endl;
	}
}