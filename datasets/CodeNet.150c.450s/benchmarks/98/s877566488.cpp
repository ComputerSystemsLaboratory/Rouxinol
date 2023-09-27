#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	
	int d,m,n,t[101],h[101];
	while(1){
		int st=0,sh=0,mint=101;
		cin>>n>>m;
		if(n==0&&m==0)return 0;
		for(int i=0;i<n;i++)cin>>t[i];
		for(int i=0;i<m;i++)cin>>h[i];
		for(int i=0;i<n;i++)st+=t[i];
		for(int i=0;i<m;i++)sh+=h[i];
		d=st-sh;
		if(d%2!=0){cout<<-1<<endl;continue;}
		for(int i=0;i<n;i++)for(int j=0;j<m;j++){
			if(t[i]-h[j]==d/2&&t[i]<mint)mint=t[i];
		}
		if(mint<101)cout<<mint<<" "<<mint-d/2<<endl;
		else cout<<-1<<endl;
	}
}