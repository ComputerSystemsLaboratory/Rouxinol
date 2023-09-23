#include <iostream>

using namespace std;

int main() {

	int m, f, r;
	char grade;

	while (cin >> m >> f >> r) {
		
		//??¨???-1?????¨?????????
		if (m == -1 && f == -1 && r == -1) {
			break;
		}

		//??????F(1)
		if ( m == -1 || f == -1) {
			grade = 'F';
		}
		//??????A
		 else if (m + f >= 80) {
			grade = 'A';
		}
		//??????B
		 else if (m + f >= 65 && m + f < 80) {
			 grade = 'B';
		 }
		 //??????C
		 else if (m + f >= 50 && m + f < 65) {
			 grade = 'C';
		 }
		 //??????C(2)
		 else if (m + f >= 30 && m + f < 50 && r >= 50) {
			 grade = 'C';
		 }
		 //??????D
		 else if (m + f >= 30 && m + f < 50) {
			 grade = 'D';
		 }
		 //??????F(2)
		 else if (m + f < 30) {
			 grade = 'F';
		 }

		 cout << grade << endl;
	}

	return 0;

}