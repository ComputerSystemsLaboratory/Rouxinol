#include<iostream>
#include<math.h>


using namespace std;

int main() {
	int i;
	cin >> i;
	int x = i;
	for (int j = 1; j <= 2; j++) {
		x = x * i;
	}
	cout << x << "\n";
	

	return 0;
}