#include <iostream>

using namespace std;
int no,total,ans;

void dfs(int sum,int depth,int last){
	if(sum>total)return;
	if(depth==no){
		if(sum==total)ans++;
		return;
	}
	for(int i=last+1;i<10;i++){
		dfs(sum+i,depth+1,i);
	}
}
int main(){
	while(1){
		ans=0;
		cin>>no>>total;
		if(no+total==0)break;
		dfs(0,0,-1);
		cout<<ans<<endl;
	}
}