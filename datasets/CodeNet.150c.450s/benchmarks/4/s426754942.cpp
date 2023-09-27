#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
	while(true) {
		int m, f, r;
		cin >> m >> f >> r;
		if((m == -1) && (f == -1) && (r == -1))	break;
		
		int sum = m + f;
		if((m == -1) || (f == -1)) {
			cout << 'F' << endl;
		} else if(sum >= 80) {
			cout << 'A' << endl;
		} else if((65 <= sum) && (sum < 80)) {
			cout << 'B' << endl;
		} else if((50 <= sum) && (sum < 65)) {
			cout << 'C' << endl;
		} else if((30 <= sum) && (sum < 50)) {
			if(50 <= r) {
				cout << 'C' << endl;
			} else {
				cout << 'D' << endl;
			}
		} else if(sum < 30) {
			cout << 'F' << endl;
		}
	}
	
    return 0;
}