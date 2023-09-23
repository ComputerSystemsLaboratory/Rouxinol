#include<iostream>
using namespace std;
int main() {
	int x[10000],a; 
	for (int i = 1; i <= 10000;i++) {
		cin >> x[i];
		if (x[i] == 0) {
			a = i;
			break;
		}
		
	}
	for (int i = 1; i <= a - 1; i++) {
		cout << "Case " << i << ": " << x[i] << endl;
	}
	return 0;
}
