#include <iostream>
#include <algorithm>
#include <vector>

#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long int
#define ull unsigned ll
using namespace std;

int main(){
	int n;
	while(cin >> n && n){
		vector<int> numset;
		numset.clear();
		rep(i, n){
			int num;
			cin >> num;
			numset.push_back(num);
		}

		ull dp[128][21];
		rep(i, n)rep(j, 21) dp[i][j]= 0;
		
		dp[1][numset[0]] = 1;

		for(int i = 1; i < n - 1; i++){
			rep(j, 21){
				if(dp[i][j] == 0) continue;
				int plus = j + numset[i];
				int minus = j - numset[i];
				
				if(plus <= 20){
					dp[i+1][plus] += dp[i][j];
				}
				
				if(minus >= 0){
					dp[i+1][minus] += dp[i][j];
				}
			}
		}
		cout << dp[n-1][numset.back()] << endl;
	}
	
	return 0;
}


	