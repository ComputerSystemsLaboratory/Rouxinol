#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int f(int y,int m,int d){
	return (y-1)/3*590+(y-1)%3*39*5+(m-1)/2*(39+!(y%3))+(m-1)%2*20+d;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int y,m,d;
		cin>>y>>m>>d;
		cout<<f(1000,1,1)-f(y,m,d)<<endl;
	}
	return 0;
}
