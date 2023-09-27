#include <iostream>
using namespace std;

int main(){
	long n, i;

	long min = 1000000;
	long max = -1000000;
	long sum = 0;
	
	cin >> n;

	while (cin >> i){
		sum += i;
		if (i < min){
			min = i;
		}
		if (i > max){
			max = i;
		}
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}