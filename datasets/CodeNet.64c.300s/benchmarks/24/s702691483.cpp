#include<iostream>
using namespace std;
int main() {
	int a[100] = { 0 }, b[100] = { 0 };
	int x;
	int n, m;
	int j = 0;
	int length;
	while (true) {
		cin >> x;
		if (x == 0){
			length = j;
			break;
		}
		for (int i = 0; i < x; i++) {
			cin >> n >> m;
			if (n > m) {
				a[j] += n + m;
			}
			else  if (n < m) {
				b[j] += n + m;
			}
			else {
				a[j] += n;
				b[j] += m;
			}
		}
		j++;
	}
	for (int i = 0; i < length; i++){
		cout << a[i] << " " << b[i] << endl;
	}
	char c;
	cin >> c;
}