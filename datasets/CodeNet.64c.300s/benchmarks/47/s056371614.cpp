#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int data[101],n,ans;
	for(int i=1;i<101;i++){
		data[i]=0;
	}
	while(cin>>n){
		data[n]++;
	}
	for(int i=1;i<101;i++){
		ans=max(ans,data[i]);
	}
	for(int i=1;i<101;i++){
		if(data[i]==ans)cout<<i<<endl;
	}
	return 0;
}