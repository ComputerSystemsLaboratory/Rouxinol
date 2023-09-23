#include <iostream>
using namespace std;

#define N_MAX 30
int n;
double dp[N_MAX] = {0.0};
int ans = 0;

int main(){
	
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	
	while(cin >> n){
		if(n == 0){
			break;
		}
		for(int i = 3; i <= n; i++){
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		
		ans = (int)dp[n] / 3650;
		ans++;
		cout << ans << endl;
	}
}