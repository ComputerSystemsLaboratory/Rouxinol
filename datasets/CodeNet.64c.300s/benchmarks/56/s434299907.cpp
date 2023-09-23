#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int n, y, m, d,days=0,i,j;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> y >> m >> d;
		//y?????????
		for (j = y; j < 999; j++) {
			if (j % 3 == 2) {
				days = days + 200;
			}
			else {
				days = days + 195;
			}
		}
		//m?????????
		for(j=m;j<10;j++){
			if (j % 2 == 0||y%3==0) {
				days = days + 20;
			}
			else {
				days = days + 19;
			}
		}
		//d?????????
		
	   if (y % 3 == 0 || m % 2 == 1) {
				days = days + 20 - d;
			}
			else { days = days + 19 - d; }
		
		cout << days + 1<<endl;
		days = 0;
	}
	return 0; }