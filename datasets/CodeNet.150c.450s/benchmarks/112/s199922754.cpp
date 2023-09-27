#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	while (cin >> n&&n) {
		char henkan[100000] = {};
		char henkango[100000] = {};
		for (int i = 0; i < n; i++) {
			cin >> henkan[i] >> henkango[i];
		}
		int m;
		cin >> m;
		char data[100000] = {};
		for (int i = 0; i < m; i++) {
			cin >> data[i];
			for (int j = 0; j < n; j++) {
				if (data[i] == henkan[j]) {
					data[i] = henkango[j];
					break;
				}
			}
		}
		cout << data << endl;
	}

    return 0;
}