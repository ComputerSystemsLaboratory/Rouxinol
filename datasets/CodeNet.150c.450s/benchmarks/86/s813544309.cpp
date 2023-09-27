#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p;
	while(cin>>n>>m>>p,n){
	int cnt=0;
	int t;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		cnt+=x;
		if(i+1==m)t=x;
	}
	if(t==0)cout<<t<<endl;
	else cout<<cnt*(100-p)/t<<endl;
}
	return 0;
}
	

