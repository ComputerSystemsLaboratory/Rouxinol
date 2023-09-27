#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int time,atai, ansa = 0;
	cin >> time;
	long suuti;
	ansa = time;
	for (int i = 0; i < time; i++) {
		cin >> suuti;
		if (suuti == 2) {
			continue;
		}
		atai = sqrt(suuti);
		for (int ii = 2; ii <= atai + 1; ii++) {
			if (suuti%ii==0) {
				--ansa;
				break;
			}
		}
	}
	cout << ansa << endl;
	return 0;
}