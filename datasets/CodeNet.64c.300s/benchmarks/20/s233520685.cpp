#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int d;
	while(cin >> d){
		int sum = 0;
		for(int x = d; x < 600; x += d) sum += x * x * d;
		cout << sum << endl;
	}
	return 0;
}