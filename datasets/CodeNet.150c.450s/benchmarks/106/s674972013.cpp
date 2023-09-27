#include<iostream>
using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	int count = 0;
	for (int i = x; i <= y; i++) {
		if (z%i == 0)count++;
	}
	cout << count << endl;
	return 0;
}
