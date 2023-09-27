#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N;
	while(cin>>N && N){
	
		vector<int> n(N), dp(N);
		for(int i=0;i<N;i++){
			cin>>n[i];
		}
		int ans = -1<<29;
		for(int i=0;i<N;i++){
			if(i-1 >= 0 && dp[i-1]>0){
				dp[i] += dp[i-1] + n[i];
			}else{
				dp[i] = n[i];
			}
			ans = max(ans, dp[i]);
		}
		
		cout<<ans<<endl;
	}
	
	
	return 0;
}