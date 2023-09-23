#include<iostream>
#include<cstring>

int num[101];
int n;
long long memo[21][101];

long long calc(int sum, int cnt){
	long long res = 0;

	if (sum < 0 || sum > 20)return 0;
	if (cnt == n - 1){
		if (sum == num[n - 1])return memo[sum][cnt] = 1;
		return 0;
	}

	if (memo[sum][cnt])return memo[sum][cnt];


	res += calc(sum + num[cnt], cnt + 1);
	if (cnt != 0)res += calc(sum - num[cnt], cnt + 1);

	return memo[sum][cnt] = res;
}

int main(){

	std::cin >> n;
	for (int i = 0; i < n; i++)std::cin >> num[i];

	memset(memo, 0, sizeof(memo));

	std::cout << calc(0, 0) << std::endl;

	return 0;
}