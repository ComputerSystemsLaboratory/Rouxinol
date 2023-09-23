#include<iostream>

using namespace std;

int n,s,c;

void dfs(int v,int sum,int M){//iは0から
	if(n==v){
		if(sum==s)c++;
	}else if(v<n){
		for(int i=M;i<=9;i++){
			if(sum+i<=s)dfs(v+1,sum+i,i+1);
		}
	}
}
int main(){
	while(true){
		cin>>n>>s;
		if(n==0&&s==0)break;
		dfs(0,0,0);
		cout<<c<<endl;
		c=0;
	}
return 0;
}