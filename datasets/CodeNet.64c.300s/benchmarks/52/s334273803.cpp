#include<iostream>
using namespace std;
int n,s,cnt;
void dfs(int m,int num,int sum);
int main(){
	while(cin>>n>>s,n || s){
		cnt=0;
		dfs(1,0,0);
		cout<<cnt<<endl;
	}
	return 0;
}

void dfs(int m,int num,int sum){
	if(m>9 && (num==n || num==n-1) && sum==s)cnt++;
	if(m>9)return;
	dfs(m+1,num+1,sum+m);
	dfs(m+1,num,sum);
}