#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void) {
	int num[5];
	while(1) {
		cin >> num[0];
		if(cin.eof())		break;
		
		for(int i = 1; i < 5; i++) {
			cin >> num[i];
		}
		sort(num, num + 5);
		for(int i = 4; i > 0; i--) {
			cout << num[i] << ' ';
		}
		cout << num[0] << endl;
	}
	
	return 0;
}