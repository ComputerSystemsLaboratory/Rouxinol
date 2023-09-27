#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	const int len = 3;
	int in[len];

	for (int i = 0; i < len; i++)
		cin >> in[i];

	sort(in, in + len);

	for (int i = 0; i < len - 1; i++)
		cout << in[i] << " ";
	cout << in[2] << endl;

	return 0;
}