#include<iostream>
#include<string>
using namespace std;
int main() {
	int n, m;
	string u[256], t[256];
	cin >> n;
	for (int i = 0; i < n; i++)cin >> u[i];
	cin >> m;
	bool open = false;
	for (int i = 0; i < m; i++) {
		cin >> t[i];
		bool know = false;
		for (int j = 0; j < n; j++) {
			if (t[i] == u[j]) {
				know = true;
				if (!open) {
					open = true;
				}
				else {
					open = false;
				}
				break;
			}
		}
		if (know) {
			if (open)cout << "Opened by " << t[i] << endl;
			else cout << "Closed by " << t[i] << endl;
		}
		else cout << "Unknown " << t[i] << endl;
	}
	return 0;
}