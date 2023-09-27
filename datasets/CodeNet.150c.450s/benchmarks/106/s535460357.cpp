#include <iostream>
using namespace std;

int main(void){
	int a, b, c;
	int count = 0;

	cin >> a >> b >> c;

	for (int i = a; i < b + 1; i++){
		if (c%i == 0) count++;
	}
		
	cout << count << "\n";

	return 0;
}