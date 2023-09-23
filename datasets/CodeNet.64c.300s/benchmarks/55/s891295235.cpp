#include<iostream>
using namespace std;
int main() {
	int x,i;
	x = 1;
	for (i = 1; ; i = i+1) {
		cin >> x;
		if (x < 1) {
			return 0;
		}	
		cout << "Case " <<i<<": "<<x<< endl;
	}
	return 0;
}
