#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		if (i % 3 == 0) cout << " " << i;
		else{
			int tmp = i;
			int a = tmp % 10;
			tmp /= 10;
			int b = tmp % 10;
			tmp /= 10;
			int c = tmp % 10;
			tmp /= 10;
			int d = tmp % 10;
			if (a == 3 || b == 3 || c == 3 || d == 3) cout << " " << i;
		}
	}
	cout << endl;
	return 0;
}