#include<iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int N, i, sum=100000;

	cin >> N;

	for (i = 0; i < N; i++) {
		sum *= 1.05;
		if(sum -(sum/1000)*1000 != 0)
			sum = ((sum + 1000) / 1000) * 1000;
	}

	cout << sum << endl;

	return 0;

}