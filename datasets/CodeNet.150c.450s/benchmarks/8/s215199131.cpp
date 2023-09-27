#include <iostream>
#include <string>

using namespace std;

int main(void){
	int n, pot = 0, poh = 0;
	string strt, strh;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> strt >> strh;
		if (strt > strh) {
			pot += 3;
		}
		else if (strt < strh) {
			poh += 3;
		}
		else {
			pot++;
			poh++;
		}
	}
	
	cout << pot << " " << poh << "\n";
	return 0;
}