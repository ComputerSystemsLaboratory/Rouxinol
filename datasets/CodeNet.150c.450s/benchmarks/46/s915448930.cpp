#include<iostream>
using namespace std;
void solve(int n,int x){
	int ans=0;
	for(int i=1;i<n;++i) for(int j=i+1;j<n;++j){
		int k=x-i-j;
		if(n>=k&&k>j) ++ans;
	}
	cout<<ans<<endl;
}

int main(){
	while(true){
		int n,x;
		cin>>n>>x;
		if(n!=0) solve(n,x);
		else break;
	}
}