#include <iostream>
#include <vector>
using namespace std;

int main() {
	int w, n, a, b;
	char comma;
	vector<int> amida;
	cin >> w >> n;
	for (int i = 0;i < w;i++) amida.push_back(i + 1);

	for (int i = 0;i < n;i++) {
		cin >> a >> comma >> b;
		swap(amida.at(a - 1), amida.at(b - 1));
	}

	for (int i = 0;i < w;i++) {
		cout << amida.at(i) << endl;
	}

	return 0;
}