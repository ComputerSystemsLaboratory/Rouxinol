#include<string>
#include<iostream>

using namespace std;

int main() {
	int count;
	cin >> count;
	int scoreA =0 , scoreB = 0;
	for (int i = 0; i < count; i++) {
		string a, b;
		cin >> a >> b;
		if (a < b) {
			scoreB += 3;
		}
		else if (a > b) {
			scoreA += 3;
		}
		else {
			scoreA++;
			scoreB++;
		}
		

	}
	cout << scoreA << ' ' << scoreB << endl;
	return 0;
}