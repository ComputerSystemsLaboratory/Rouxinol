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

#define INF 1e9
#define rep(i,n) for(int i=0;i<n;i++)

int p[200],q[50],dp1[1000000],dp2[1000000],n;

int main(){
	rep(i,200)p[i]=(i+1)*(i+2)*(i+3)/6;
	rep(i,50)q[i]=(4*i+1)*(4*i+2)*(4*i+3)/6;
	for(int i=1;i<1e6;i++){
		dp1[i]=dp2[i]=INF;
		rep(j,200)if(p[j]<=i)dp1[i]=min(dp1[i],dp1[i-p[j]]+1);
		rep(j,50)if(q[j]<=i)dp2[i]=min(dp2[i],dp2[i-q[j]]+1);
	}
	while(cin>>n&&n){
		cout<<dp1[n]<<" "<<dp2[n]<<endl;
	}
}