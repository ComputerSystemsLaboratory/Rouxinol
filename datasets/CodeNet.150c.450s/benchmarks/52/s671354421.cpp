#include <iostream>

using namespace std;

int main()
{
	int cars[100] ={0};
	int ptr_top = 0;
	int car_num;
	
	while ( cin >> car_num ) {
		if (car_num == 0) {
			cout << cars[ptr_top] << endl;
			ptr_top--;
		}
		else {
			ptr_top++;
			cars[ptr_top] = car_num;
		}
	}
	
	return 0;
}