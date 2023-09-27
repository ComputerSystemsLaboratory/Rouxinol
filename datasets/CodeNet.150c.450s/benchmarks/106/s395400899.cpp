#include<iostream>

using namespace std;

int main() {
	int x =0 , y = 0 , obj = 0;
	cin >> x >> y >> obj;
	int count = 0;
	for (int i = x; i <= y;i++) {
		if (obj%i == 0) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}