#include "iostream"
#include "math.h"
#include "vector"
using namespace std;

bool jadge(int n){
	if (n == 1)return false;
	if (n == 3)return true;
	if (n == 2)return true;
	if (n % 2 == 0)return false;
	int r = sqrt(n);
	for (int i = 3; i <= r; i+=2){
		if (n % i == 0)return false;
	}
	return true;
}

int solve(vector<int> &v){
	int result = 0;
	for (int i = 0; i < v.size(); ++i){
		if (jadge(v[i]))result++;
	}
	return result;
}

int main(){
	int N;
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; ++i){
		cin >> v[i];
	}
	cout << solve(v) << endl;
}