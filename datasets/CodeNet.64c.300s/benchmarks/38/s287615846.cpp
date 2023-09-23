#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
vector<int> balls;
bool dfs(int i,int left,int right,int len)
{
	if(i==len&&(balls[i-1]>left||balls[i-1]>right))return 1;
	if(balls[i-1]<left&&balls[i-1]<right)return 0;
	if(balls[i-1]>left){
		return dfs(i+1,balls[i-1],right,len);
	}
	if(balls[i-1]>right){
		return dfs(i+1,left,balls[i-1],len);
	}
	
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int x;
		int j=10;
		while(j--){
			cin>>x;
			balls.push_back(x);
		}
		if(dfs(1,-1,-1,10)){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
		balls.clear();
	}
} 