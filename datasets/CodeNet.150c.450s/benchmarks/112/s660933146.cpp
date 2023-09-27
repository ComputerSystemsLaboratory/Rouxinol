#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int main() {

	int n;
	while (true) {
		cin >> n;
		if (n == 0) {
			break;
		}
		vector<pair<char, char>> table(n);

		for (auto& temp : table) {
			cin >> temp.first >> temp.second;
		}

		int m;
		cin >> m;

		for (int i = 0; i < m; ++i) {
			char temp;
			cin >> temp;

			auto it = find_if(table.begin(), table.end(), [temp](pair<char, char> a) {return a.first == temp;});
			if (it == table.end()) {
				cout << temp;
			}
			else {
				cout << it->second;
			}
		}
		cout << endl;
	}
	return 0;
}