#include <iostream>
#include <map>

using namespace std;

int fib(int n);

map<int, int> fib_array;


int main(){
	int input;
	cin >> input;

	cout << fib(input) << endl;
	return 0;


}

int fib(int n){
	switch (n)
	{
	case 0:
	case 1:
		return 1;
		break;
	default:
		break;
	}
	
	if (fib_array[n] == 0){
		int new_fib = fib(n - 1) + fib(n - 2);
		fib_array[n] = new_fib;
		return new_fib;
	}
	else{
		return fib_array[n];
	}

}