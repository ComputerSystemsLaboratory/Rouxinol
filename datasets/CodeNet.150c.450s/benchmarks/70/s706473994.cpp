#include <iostream>

using namespace std;
#define rep2(x,from,to) for(int x=(from); x<(to); (x)++)
#define rep(x,to) rep2(x,0,to)
int main() {
	int m, d;
	int c[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(cin >> m >> d && (m || d)) {
		int total = 0;
		rep(i,m-1) {
			total += c[i];
		}
		total += d;
		switch(total % 7) {
		case 0: cout << "Wednesday" << endl;
			break;
		case 1: cout << "Thursday" << endl;
			break;
		case 2: cout << "Friday" << endl;
			break;
		case 3: cout << "Saturday" << endl;
			break;
		case 4: cout << "Sunday" << endl;
			break;
		case 5: cout << "Monday" << endl;
			break;
		case 6: cout << "Tuesday" << endl;
			break;
		}
	}
	return 0;
}