#include <iostream>
using namespace std;
int a[10];

bool dfs(int i,int l,int r){
	if(i>=10)return 1;
	if(l>a[i]&&r>a[i])return 0;
	if(l<a[i]){
		if(dfs(i+1,a[i],r))return 1;
	}
	if(r<a[i]){
		return dfs(i+1,l,a[i]);
	}
	return 0;
}

int main(){
	int T;cin>>T;
	while(T--){
		for(int i=0;i<10;i++)cin>>a[i];
		if(dfs(0,0,0))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}