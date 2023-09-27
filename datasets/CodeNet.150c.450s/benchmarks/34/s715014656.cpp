#include<iostream>

using namespace std;

int dfs(int n, int dan){

	if(dan == n){
		return 1;
	}
	else if(dan > n){
		return 0;
	}
	else{
		int count = 0;
		count = count + dfs(n, dan + 1);
		count = count + dfs(n, dan + 2);
		count = count + dfs(n, dan + 3);
		return count;
	}
}

int main(){
	
	int n;

	while(1){
		cin>>n;

		if(n == 0) break;

		cout<<dfs(n,0) / 10 / 365 + 1<<endl;
	}
}