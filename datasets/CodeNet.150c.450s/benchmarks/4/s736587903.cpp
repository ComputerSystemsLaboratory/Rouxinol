#include <iostream>
using namespace std;

int main(void)
{
	int m, f, r;
	int sum;
	char rank;
	
	while (1){
		cin >> m >> f >> r;
		if (m != -1 && f != -1){
			sum = m + f;
		}
		else if (m == -1 && f == -1){
			break;
		}
		else {
			sum = 0;
		}
		
		if (sum >= 80){
			rank = 'A';
		}
		else if (sum >= 65){
			rank = 'B';
		}
		else if (sum >= 50){
			rank = 'C';
		}
		else if (sum >= 30){
			rank = 'D';
			if (r >= 50){
				rank = 'C';
			}
		}
		else {
			rank = 'F';
		}
		
		cout << rank << endl;
	}
	
	return (0);
}