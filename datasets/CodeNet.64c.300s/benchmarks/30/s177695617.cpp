#include<iostream>

using namespace std;

int main(void) {
	int now, count;

	while(true) {
		cin >> now;
		if(now == 0) { break; }
		count = 0;
		now = 1000 - now;
		while(now > 0) {
			if(now >= 500) {
				now -= 500;
				count++;
			} else if(now >= 100) {
				now -= 100;
				count++;
			} else if(now >= 50) {
				now -= 50;
				count++;
			} else if(now >= 10) {
				now -= 10;
				count++;
			} else if(now >= 5) {
				now -= 5;
				count++;
			} else {
				now -= 1;
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}