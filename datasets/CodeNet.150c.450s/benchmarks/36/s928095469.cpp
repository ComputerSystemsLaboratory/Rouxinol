#include<iostream>
using namespace std;

int f(int d) {
	int y;
	y = d * d;
	return y;
}


int main()
{
	int d;
	while (cin >> d) {
		int t = 600 / d;
		int S = 0;
		for (int i = 1;i < t;i++) {
			S = S + d * f(i*d);
		}
		cout << S << endl;
	}
    return 0;
}

