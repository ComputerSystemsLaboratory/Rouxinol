#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int data[101]={},num,max=0;
	while(cin>>num){
		//if(num==0) break;
		data[num]++;
	}
	rep(i,1,101){
		if(data[i]>max) max=data[i];
	}
	rep(i,0,101){
		if(data[i]==max) cout<<i<<endl;
	}
}