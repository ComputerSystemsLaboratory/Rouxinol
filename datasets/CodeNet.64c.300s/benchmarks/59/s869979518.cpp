#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

bool is_prime(long long n){
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return false;
	}
	return true;
}

int main(){
	int n, count = 0;
	long long m;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> m;
		if (is_prime(m)) count++;
	}
	cout << count << endl;
}