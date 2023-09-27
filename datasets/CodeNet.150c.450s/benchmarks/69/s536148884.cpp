#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int main(){
	
	int n;
	cin>>n;
	
	rep(loop, n){
		int m=10;
		int in[10];
		bool ans = false;
		rep(i,m)cin>>in[i];
		rep(i,(1<<m)){
			vector<int> a;
			vector<int> b;
			rep(j,m){
				if((i&(1<<j))>0)a.push_back(in[j]);
				else b.push_back(in[j]);
			}
			
			bool ok=true;
			rep(j,a.size()-1)if(a[j]>a[j+1])ok=false;
			rep(j,b.size()-1)if(b[j]>b[j+1])ok=false;
			if(ok)ans=true;
		}
		if(ans)puts("YES");
		else puts("NO");
	}
	
}