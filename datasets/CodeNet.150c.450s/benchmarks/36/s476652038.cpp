#include<iostream>
using namespace std;

int main()
{
	int d;
	while (cin >> d) {
		int sum = 0;
		for (int i = d; i <= 600 - d; i += d) {
			sum += (d*i*i);
		}
		cout << sum << endl;
	}
    return 0;
}