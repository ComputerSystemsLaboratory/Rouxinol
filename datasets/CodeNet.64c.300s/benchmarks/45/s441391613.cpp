#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p,x,d,a;
	while(cin>>n>>m>>p,n){
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>x;
			if(i+1==m)d=x;
			sum+=x;
		}
		a=sum*100*(100-p)/100;
		if(d!=0)cout<<a/d<<endl;
		else cout<<0<<endl;
	}
}