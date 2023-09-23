#include <iostream>

using namespace std;

int main(){
    for(int d, size = 0; cin >> d; cout << size << endl, size = 0)
		for(int k = 0; k < 600; k += d)
			size += d * k * k;

	return 0;
} 