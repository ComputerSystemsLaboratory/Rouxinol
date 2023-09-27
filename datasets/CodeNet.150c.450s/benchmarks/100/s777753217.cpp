#include <iostream>

using namespace std;

inline long long int fact(int n){return n>1?n*fact(n-1):1;}

int main(void){
	int num;

	cin >> num;
	cout << fact(num) << endl;
	return 0;
}