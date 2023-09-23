#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)

int main(){
	while(1){
		int n,m,p;
		cin>>n>>m>>p;
		if(n==0&&m==0&&p==0) break;
		int count=0,ans,a;
		lp(i,n){
			cin>>a;
			count+=a;
			if(i==m-1) ans=a;
		}
		count*=100;
		count*=(100-p);
		if(ans!=0)cout<<count/ans/100<<endl;
		else cout<<"0"<<endl;
	}		
	return 0;
}
