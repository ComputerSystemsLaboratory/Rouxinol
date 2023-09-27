#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	int n = 0;
	cin >> n;
	vector<long long> dp(21, 0);
	for(int i = 0; i < n-1; i++){
		int tmp;
		cin >> tmp;
		if(i){
			vector<long long> copy = dp;
			dp = vector<long long>(21, 0);
			for(int j = 0; j < copy.size(); j++){
				int pl = j+tmp, mi = j-tmp;
				if(pl<=20)dp[pl]+=copy[j]; 
				if(mi>=0)dp[mi]+=copy[j];
			}
		}
		else{
			dp[tmp]++;
		}
	}
	int result, count = 0;
	cin >> result;
	cout << dp[result] << endl;
	return 0;
}