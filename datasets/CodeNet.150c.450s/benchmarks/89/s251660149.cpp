#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int num[1000001];

bool sosu(int n){
	if (num[n] == -1)
		return false;
	if (num[n] == 1)
		return true;

	int sqr = sqrt(n);
	for (int i = 2; i <= sqr ;i++){
		if (n % i == 0){
			num[n] = -1;
			return false;
		}
	}
	num[n] = 1;
	return true;
}

int main()
{
	int a, d, n;
	num[1] = -1;
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