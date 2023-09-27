#include <iostream>
#include <fstream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define INF 1e8
#define EPS 1e-9

#define rep2(i,m,n) for(int i=m;i<n;i++)
#define rep(i,n) rep2(i,0,n)
#define ll long long
#define pb push_back

ll N,a[100],dp[99][21];

int main(){
	while(cin>>N&&N){
		rep(i,21)fill(dp[i],dp[i]+N,0);
		rep(i,N)cin>>a[i];
		dp[0][a[0]]=1;
		rep2(i,1,N-1)rep(j,21){
			if(j+a[i]<21)dp[i][j+a[i]]+=dp[i-1][j];
			if(j-a[i]>=0)dp[i][j-a[i]]+=dp[i-1][j];
		}
		cout<<dp[N-2][a[N-1]]<<endl;
	}
}