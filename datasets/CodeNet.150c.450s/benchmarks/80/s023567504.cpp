#include <iostream>
using namespace std;

int main() {
	int s = 0; int t = 0; int temp;
	for (int i = 0; i < 4; i++) { cin >> temp; s = s + temp; }
	for (int i = 0; i < 4; i++) { cin >> temp; t = t + temp; }
	cout << (s > t ? s : t) << endl;
	return 0;
}
