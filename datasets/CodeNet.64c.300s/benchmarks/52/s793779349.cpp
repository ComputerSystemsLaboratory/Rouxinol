#include<iostream>

using namespace std;

int n,s;
int solve(int now,int sum,int num){
	if(num>n)return 0;
	int ans=0;
	
	for(int i=now+1;i<10;i++){	
		if(sum+i<s)ans+=solve(i,sum+i,num+1);
		else if(sum+i==s && num+1==n)return 1;
	}
	return ans;
}

int main(){
	while(cin>>n>>s && n+s){
		cout<<solve(-1,0,0)<<endl;
	}
}