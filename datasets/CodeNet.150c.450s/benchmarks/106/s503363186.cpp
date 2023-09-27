#include<iostream>
using namespace std;
int main() {
	int a, b, c, y, i, j;
	cin >> a >> b >> c;
	y = 0;
	j = 0;
	i = a;
	if (a>b) {
		return -1;
	}
	while (i <= b) {
		y = c % i;
		if (y == 0) {
			j++;
		}
		i++;
	}
	cout << j << endl;
	return 0;
}