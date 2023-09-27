#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cnt;
int n,s;

void dfs(int left,int sum,int idx){
	if(left==0){
		if(sum==s)
			cnt++;
		return;
	}
	else if(sum > s)
		return;

	for(int i = idx+1; i <= 9; i++){
		dfs(left-1,sum+i,i);
	}
}

int main(){

	while(cin>>n>>s&&!(n==0&&s==0)){
		cnt=0;
		dfs(n,0,-1);
		cout<<cnt<<endl;
	}

	return 0;
}