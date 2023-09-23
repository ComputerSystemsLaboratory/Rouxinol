#include<iostream>
using namespace std;
int main() {
	 
	int a = 0;
	int b = 0;
	int c = 0;
	int ris = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	for (int i = a; i <= b; i++) {
	
		if (c % i == 0) {
			ris++;
		}

	}

	cout << ris << endl;

	return 0;
}
