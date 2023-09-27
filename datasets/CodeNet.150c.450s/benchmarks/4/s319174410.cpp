#include <iostream>

int main(void)
{
	using namespace std;

	int m,f,r;
	char grade;
	while(1){
		cin >> m;
		cin >> f;
		cin >> r;
	
		if(m == -1 && f == -1 && r == -1)	break;
	
		if(m == -1 || f == -1)	grade = 'F';
		else{
			int sum = m + f;
			if(sum >= 80)				grade = 'A';
			else if(sum >= 65)	grade = 'B';
			else if(sum >= 50)	grade = 'C';
			else if(sum >= 30){
				if(r >= 50)				grade = 'C';
				else							grade = 'D';
			}
			else 								grade = 'F';
		}
		cout << grade << endl;
	}	

	return 0;
}