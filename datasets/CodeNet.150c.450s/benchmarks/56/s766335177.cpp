
#include <iostream>
#include <iomanip>

using namespace std;

long long a, n, smallest, biggest, sum;
char op;

int main(){
	
	cin >> n;

	smallest = 0;
	biggest = 0;
	sum = 0;

	for (int i = 0; i + 1 <= n;i++){

		cin >> a;

		if (i == 0 || a < smallest){
			smallest = a;
		}
		if (i == 0 || a > biggest){
			biggest = a;
		}

		sum += a;

	}

		cout << smallest << " " << biggest << " " << sum << endl;

	return 0;
}




