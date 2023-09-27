#include<iostream>

using namespace std;

void dfs(int n,int s,int k);

int ans=0;

int main(){
	int n,sum;
	while(cin>>n>>sum , n||sum){
		ans=0;
		dfs(n,sum,0);
		cout<<ans<<endl;
	}
}

void dfs(int n,int sum,int k){
	if(n<0){
		return ;
	}
	if(n==0){
		if(sum==0){
			ans++;
		}
	}
	else{
		if(9<k){
			return ;
		}
		for(int i=k;i<=9;i++){
			dfs(n-1,sum-i,i+1);
		}
	}
}