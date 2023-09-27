
#include<iostream>
#include<string>
#include<algorithm>
#define _USE_MATH_DEFINES
#include<math.h>
#include<iomanip>

using namespace std;


int main() {
	int i,n,a,b;
	int box[6] = {};
	string str1,str2;
	for (i = 0; i < 6; i++) {
		cin >> box[i];
	}
	cin >> n;

	for (i = 0;i<n;i++) {
		cin >> a >> b;
		if ((a == box[0] && b == box[1]) || (a == box[1] && b == box[5]) || 
			(a == box[5] && b == box[4])|| (a == box[4] && b == box[0])) { std::cout << box[2] << endl; }
		else if ((a == box[1] && b == box[0])|| (a == box[5] && b == box[1])||
			(a == box[4] && b == box[5])|| (a == box[0] && b == box[4])) { std::cout << box[3] << endl; }
		else if ((a == box[2] && b == box[1])|| (a == box[1] && b == box[3])||
			(a == box[3] && b == box[4])|| (a == box[4] && b == box[2])) { std::cout << box[5] << endl; }
		else if ((a == box[1] && b == box[2])|| (a == box[2] && b == box[4])||
			(a == box[4] && b == box[3])|| (a == box[3] && b == box[1])) { std::cout << box[0] << endl; }
		else if ((a == box[0] && b == box[2]) || (a == box[2] && b == box[5]) ||
			(a == box[5] && b == box[3]) || (a == box[3] && b == box[0])) {
			std::cout << box[4] << endl;
		}
		else if ((a == box[0] && b == box[3]) || (a == box[3] && b == box[5]) ||
			(a == box[5] && b == box[2]) || (a == box[2] && b == box[0])) {
			std::cout << box[1] << endl;
		}
	}

	return 0;
}

