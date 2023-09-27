#include <iostream>
using namespace std;

int N;
int num[100];
long long int memo[100][21];

void init(){
	// memoを-1で初期化
	for (int i = 0; i < 100; i++){ for (int j = 0; j < 21; j++){
		memo[i][j] = -1;
	}}
}

long long int correctEq(int index, int sum){
	if (index == N-2) {
		if (sum == num[N-1]) return 1;
		else return 0;
	}
	if (memo[index][sum] >=0) return memo[index][sum];

	memo[index][sum] = 0;
	if (sum + num[index + 1] <= 20) memo[index][sum] += correctEq(index+1, sum+num[index+1]);
	if (sum - num[index + 1] >= 0)  memo[index][sum] += correctEq(index+1, sum-num[index+1]);

	return memo[index][sum];
}

int main(){
	init();

	cin >> N;
	for (int i = 0; i < N; i++) cin >> num[i];

	cout << correctEq(0, num[0]) << endl;
	
	return 0;
}