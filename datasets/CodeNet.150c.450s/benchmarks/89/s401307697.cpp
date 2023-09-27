#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool sosu(int n){
	if (n == 1)
		return false;

	int sqr = sqrt(n);
	for (int i = 2; i <= sqr ;i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main()
{
	int a, d, n;
	while (cin >> a >> d >> n, a || d || n){
		int counter = 0;
		for (int i = a;; i = i + d){
			if (sosu(i))
				counter++;
			if (counter == n){
				cout << i<<endl;
				break;
			}
		}

	}
	return 0;
}