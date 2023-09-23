#include<iostream>
int dp[1001];
using namespace std;
int main(){
	for (int i = 1; i < 1001; i++){
		int k = i;
		for (int j = i + 1; j < 1001; j++){
			k += j;
			if (k>1000)break;
			dp[k]++;
		}
	}
	while (1){
		int n;
		cin >> n;
		if (n == 0)return 0;
		cout << dp[n] << endl;

	}
	return 0;

}