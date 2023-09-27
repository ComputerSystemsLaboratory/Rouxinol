#include <iostream>

using namespace std;

int tax(int rate, int price){
	return (int) price * (100 + rate) / 100;
}

int solve(int x, int y, int s){
	int maximum = 0;
	for (int i = 1; i < s; i++)
		for (int j = i; j < s; j++)
			if (tax(x, i) + tax(x, j) == s)
				maximum = max(maximum, tax(y, i) + tax(y, j));
	return maximum;
}

int main(){
	int x, y, s;
	while (cin >> x >> y >> s && x > 0)
		cout << solve(x, y, s) << endl;
}