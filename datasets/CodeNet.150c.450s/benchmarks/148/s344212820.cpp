#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() 
{
	int n; 
	cin >> n;
	string st[] = { "AC", "WA", "TLE", "RE" };
	int stn[4] = { 0, 0, 0, 0 };
	for (int i = 0; i < n; i++) {
		string inp;
		cin >> inp;
		for (int j = 0; j < 4; j++) {
			if (st[j] == inp) {
				stn[j]++;
				break;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << st[i] << " x " << stn[i] << endl;
	}
}