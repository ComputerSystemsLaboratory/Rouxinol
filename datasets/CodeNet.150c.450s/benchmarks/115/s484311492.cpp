#include<iostream>
using namespace std;

int main(void){
	int q;
	string a,b;
	cin>>q;
	while(q--){
		cin>>a>>b;
		int dp[1010][1010] = {0};
		for(int j = 0 ; j < a.size() ; j ++){
			for(int i = 0 ; i < b.size() ; i ++){
				if(a[j] == b[i]){
					dp[j+1][i+1] = dp[j][i]+ 1;
				}else{
					dp[j+1][i+1] = max(dp[j][i+1],dp[j+1][i]);
				}
			}
		}
		cout<<dp[a.size()][b.size()]<<endl;
	}
}