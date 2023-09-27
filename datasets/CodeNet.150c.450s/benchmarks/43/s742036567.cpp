#include<iostream>

using namespace std;

int main(void) {
	int num, a, b;
	int resa, resb;
	int i;

	while(true) {
		cin >> num;
		if(num == 0) { break; }
		resa = resb = 0;
		for(i = 0; i < num; i++) {
			cin >> a >> b;
			if(a > b) { resa += a + b; }
			else if(a < b) { resb += a + b; }
			else { resa += a; resb += b; }
		}
		cout << resa << " " << resb << endl;
	}

	return 0;
}