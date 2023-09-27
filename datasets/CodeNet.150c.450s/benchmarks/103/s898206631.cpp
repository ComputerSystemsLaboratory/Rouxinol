#include <iostream>

int n,s;

int dfs(int limit,int num,int res){
	if(num==n){
		if(res==s)
			return 1;
		else
			return 0;
	}
	int ans=0;
	for(int i=limit;i<10;++i){
		ans+=dfs(i+1,num+1,res+i);
	}
	return ans;
}

int main(){
	while(std::cin>>n>>s){
		if(n+s==0)
			break;
		std::cout<<dfs(0,0,0)<<std::endl;
	}
	return 0;
}