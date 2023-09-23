#include <iostream>
using namespace std;

int main() 
{
	int num1, num2;

	cin >> num1 >> num2;

	if(num1>num2){
		cout << "a > b\n";
	}
	else if(num1<num2) {
		cout << "a < b\n";
	}
	else {
		cout << "a == b\n";
	}


	return 0;

}