#include <iostream>
#include <fstream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <iomanip>
#include <map>
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

int n,k,a[100000];

int main(){
	while(cin>>n>>k&&n){
		rep(i,n)cin>>a[i];
		int s=0;
		rep(i,k)s+=a[i];
		int ans=s;
		rep(i,n-k){
			s+=a[k+i]-a[i];
			ans=max(ans,s);
		}
		cout<<ans<<endl;
	}
}