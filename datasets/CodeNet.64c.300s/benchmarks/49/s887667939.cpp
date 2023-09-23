#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long a, b;
	while (cin >> a >> b){
		for (long i = 0; i < 7; i++){
			if (a + b >= pow(10, i) && a + b < pow(10, i + 1)){
				cout << (i + 1) << endl;
			}
		}
	}
	return 0;
}