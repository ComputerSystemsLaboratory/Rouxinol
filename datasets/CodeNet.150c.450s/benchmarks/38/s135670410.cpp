#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
#include <functional>

using namespace std;


int main(void)
{
	int n;
	cin >> n;

	vector<bool> result(n);

	array<int, 3> triangle;
	for(int i = 0; i < n; i++){
		cin >> triangle[0] >> triangle[1] >> triangle[2];

		sort(begin(triangle), end(triangle), greater<int>());

		const auto square = bind(pow<int, int>, placeholders::_1, 2);
		result[i] = 
			square(triangle[0]) == square(triangle[1]) + square(triangle[2]);
	}

	for(const bool& b : result){
		cout << (b ? "YES" : "NO") << endl;;
	}

	return 0;
}