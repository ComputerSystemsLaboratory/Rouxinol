#include <iostream>

using namespace std;
typedef unsigned long long ull;

int main(){
	int N;
	cin >> N;
	ull *dp = new ull[(N-1) * 21];
	for(int i=0; i<(N-1) * 21; i++) dp[i] = 0;
	int number;
	cin >> number;
	dp[number] = 1;

	for(int n=1; n<N-1; n++){
		cin >> number;

		if(number == 0){
			for(int i=0; i<=20; i++){
				const int index = i + n * 21;
				dp[index] = dp[index - 21] * 2;
			}
		}
		else{
			for(int i=0; i<=20; i++){
				const int index = i + n * 21;
				if(i - number >= 0) dp[index] += dp[index - number - 21];
				if(i + number <= 20) dp[index] += dp[index + number - 21];
			}
		}
	}

	cin >> number;
	cout << dp[number + (N-2) * 21] << endl;

	delete[] dp;
	return 0;
}