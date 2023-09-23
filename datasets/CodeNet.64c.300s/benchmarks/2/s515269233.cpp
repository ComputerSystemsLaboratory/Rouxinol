#include <iostream>

using namespace std;

int main() {
	int m, f, r;
	int exam_sum;
	char grade;

	cin >> m >> f >> r;

	while(m != -1 || f != -1 || r != -1) {
		if(m == -1 || f == -1) {
			grade = 'F';
		} else {
			exam_sum = m + f;

			if(80 <= exam_sum) {
				grade = 'A';
			} else if(65 <= exam_sum) {
				grade = 'B';
			} else if(50 <= exam_sum) {
				grade = 'C';
			} else if(30 <= exam_sum) {
				if(50 <= r) 
					grade = 'C';
				else
					grade = 'D';
			} else {
				grade = 'F';
			}
		}
		
		cout << grade << endl;

		cin >> m >> f >> r;
	}
	
	return 0;
}