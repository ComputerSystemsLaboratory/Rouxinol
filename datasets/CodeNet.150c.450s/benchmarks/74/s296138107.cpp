#include<iostream>
#include<vector>
#include<algorithm>

#define INT_MAX 2147483647
//Macro

using namespace std;

int solve(int n, int s, vector<int> d){
	vector<int> dp(n+1, INT_MAX); //Generate a Vector, of Size n+1, and Filled with INT_MAX
	dp[0] = 0; //Initialize dp[0] to 0
	for(int i = 0; i < s; i++){ //Iterate from 0 -> s
		for(int j = 0; (j + d[i]) <= n; j++){ //Iterate from 
			if(dp[j] != INT_MAX){
				dp[j+d[i]] = min(dp[j+d[i]], dp[j]+1);
			}
		}
    }
	return dp[n];
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> x(m);
	for(int i = 0; i < m; i++){
		cin >> x[i];
	} //Finished Resolving Inputs
	cout << solve(n, m, x) << endl; //Perform Solve Function
}
