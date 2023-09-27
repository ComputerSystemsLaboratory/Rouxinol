#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

int dp[1000001];
int dp2[1000001];
vector<int> vi;

void solve(){
	for(int i=1;i*(i+1)*(i+2)/6 <= 1000000;i++){
		vi.push_back(i*(i+1)*(i+2)/6);
	}
	fill(dp,dp+1000001,9999999);
	fill(dp2,dp2+1000001,9999999);
	
	dp[0] = 0;
	dp2[0] = 0;
	for(int i=0;i<1000000;i++){
		if(dp[i] != 9999999){
			for(int j=0;j<vi.size();j++){
				if(i+vi[j] <= 1000000){
					dp[i+vi[j]] = min(dp[i+vi[j]],dp[i]+1);
				}else{
					break;
				}
			}
		}
		if(dp2[i] != 9999999){
			for(int j=0;j<vi.size();j++){
				if(i+vi[j] <= 1000000 && vi[j]%2 == 1){
					dp2[i+vi[j]] = min(dp2[i+vi[j]],dp2[i]+1);
				}
			}
		}
	}
}

int main(){
	int n;
	solve();
	while(true){
		cin >> n;
		if(n==0){
			break;
		}

		cout << dp[n] << " " << dp2[n] << endl;
	}
}