#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int x){
	if (x == 2)
		return true;

	if (x < 2 || x % 2 == 0)
		return false;

	int	i = 3;
	while (i <= sqrt(x)){
		if (x%i == 0)
			return false;
		i += 2;
	}
	return true;
}

int main(void){
	int N, A, count=0;

	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> A;

		if (isprime(A))
			count++;
	}

	cout << count << "\n";

	return 0;
}