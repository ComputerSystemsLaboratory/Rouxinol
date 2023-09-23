#include <iostream>
using namespace std;
int main(){
	int min, max, n ;
	int count = 0;
	cin >> min >> max >> n;
	for (int i = min; i <= max; i++) count += (n % i == 0) ? 1 : 0;
	cout << count << endl;
	return 0;
}