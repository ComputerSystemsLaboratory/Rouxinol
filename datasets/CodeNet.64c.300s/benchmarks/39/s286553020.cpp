#include<iostream>

using namespace std;
int n;
int bfs(int now,int d){
	int ans=0;
	if(d==4){
	if(now==n)return 1;
	else return 0;
	}
	else{
	for(int i=0;i<10;i++)ans+=bfs(now+i,d+1);
	}
	return ans;
}

int main(){
	while(cin>>n)cout<<bfs(0,0)<<endl;
}