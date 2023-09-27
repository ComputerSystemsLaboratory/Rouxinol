#include<iostream>
#include<cstring>

int n;
int data[101];
long long memo[101][21];

long long res(int k, int sum){
	if (sum < 0 || sum > 20)return 0;
	if (k == n - 1){
		if (sum == data[k])return 1;
		return 0;
	}
	if (memo[k][sum] != -1)return memo[k][sum];

	long long ans = 0;
	ans += res(k + 1, sum + data[k]);
	ans += res(k + 1, sum - data[k]);

	return memo[k][sum] = ans;
}

int main(){

	std::cin >> n;

	memset(memo, -1, sizeof(memo));

	for (int i = 0; i < n; i++){
		std::cin >> data[i];
	}

	std::cout << res(1, data[0]) << std::endl;

	return 0;
}