#include<iostream>
using namespace std;

int main(void){
	int tmp, a, b;
	a = b = 0;
	for(int i = 0; i < 8; i++){
		cin >> tmp;
		if(i < 4)
			a += tmp;
		else
			b += tmp;
	}
	cout << ((a >= b)? a : b) << endl;
	return 0;
}