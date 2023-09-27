#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, oc = 1;
	string us;
	cin >> N;
	vector<string> users(N,"");
	for (int i = 0; i < N; i++) {
		cin >> users[i];
	}
	cin >> M;
	for (int i = 0;i < M;i++) {
		cin >> us;
		if (find(users.begin(), users.end(), us) != users.end()) {
			if (oc) {
				cout << "Opened by " << us << endl;
				oc = 0;
			} else {
				cout << "Closed by " << us << endl;
				oc = 1;
			}
		} else {
			cout << "Unknown " << us << endl;
		}
	}
	return 0;
}