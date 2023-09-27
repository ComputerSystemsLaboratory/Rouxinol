#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n,j;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		j = i;
		if (i % 3 == 0) {
			cout <<" "<<i;
		}
		else {
			while (j > 0) {
				if (j % 10 == 3) {
					cout << " " <<i;
					break;
				}
				else{
					j = j / 10;
				}
			}
		}
	}
	cout << endl;
}