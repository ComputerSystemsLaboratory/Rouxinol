#include<iostream>
using namespace std;

int n,s;

int dfs(int i,int c,int sum){
	int res=0;
	if(n<c || c+10-i<n || s<sum)return 0;
	if(c==n&&sum==s)return 1;
	res += dfs(i+1,c,sum);
	res += dfs(i+1,c+1,sum+i);
	return res;
}
int main(){
	while(cin>>n>>s,n||s)cout<<dfs(0,0,0)<<endl;
	return 0;
}