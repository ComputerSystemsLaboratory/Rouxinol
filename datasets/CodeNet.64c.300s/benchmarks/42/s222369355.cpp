#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int N,x[20],y[20],f[20],M;

int main(){
	while(cin>>N&&N){
		int cx=10,cy=10;
		rep(i,N)f[i]=0;
		rep(i,N)cin>>x[i]>>y[i];
		rep(i,N)if(cx==x[i]&&cy==y[i])f[i]=1;
		cin>>M;
		rep(i,M){
			char d;int l;
			cin>>d>>l;
			rep(j,l){
				if(d=='E')cx++;
				if(d=='N')cy++;
				if(d=='W')cx--;
				if(d=='S')cy--;
				rep(k,N)if(cx==x[k]&&cy==y[k])f[k]=1;
			}
		}
		int ans=1;
		rep(i,N)if(!f[i])ans=0;
		cout<<(ans?"Yes":"No")<<endl;
	}
}