#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i,n,flg[31];
	for(i=1;i<=30;i++) flg[i]=1;
	for(i=0;i<28;i++){
		cin>>n;
		flg[n]=0;
	}
	for(i=1;i<=30;i++){
		if(flg[i]!=0) cout<<i<<endl;
	}
	return 0;
}