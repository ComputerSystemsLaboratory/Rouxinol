#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int taro_count = 0;
	int hanako_count = 0;
	for (int i = 0; i < n; ++i) {
		string taro, hanako;
		cin >> taro >> hanako;
		if (taro > hanako) {
			taro_count += 3;
		}
		else if (taro == hanako) {
			taro_count++;
			hanako_count++;
		}
		else if (taro < hanako) {
			hanako_count += 3;
		}
	}
	cout << taro_count << ' ' << hanako_count << endl;
	return 0;
}