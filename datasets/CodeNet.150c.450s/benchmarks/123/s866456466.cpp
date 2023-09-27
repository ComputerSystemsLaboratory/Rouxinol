#include <iostream>

using namespace std;

#define CALC_PRIME_MAX 10007  // _/10 ^ 8 + next prime
#define PRIME_ELEMENT_MAX 1230 // prime( _/10 ^ 8 ) + 1(10007)

int prime_number[PRIME_ELEMENT_MAX];

bool isPrime(int element)
{
	for (int i = 0; prime_number[i] * prime_number[i] <= element; i++) {
		if (element % prime_number[i] == 0)
			return false;
	}
	return true;
}

void calcPrime()
{
	// add 2, 3 (prime)
	int prime_index = 2;
	prime_number[0] = 2;
	prime_number[1] = 3;
	// next prime is 5
	for (int element = 5; element <= CALC_PRIME_MAX; element += 2) {
		bool is_prime = true;
		// judge prime
		for (int i = 1; prime_number[i] * prime_number[i] <= element; i++) {
			if (element % prime_number[i] == 0) {
				is_prime = false;
				break;
			}
		}
		// add prime
		if (is_prime) prime_number[prime_index++] = element;
	}
//	cout << "prime_element_num = " << prime_index << endl;
	return;
}


int main()
{
	int n, element, count = 0;
	calcPrime();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> element;
		if (isPrime(element)) count++;
	}
	cout << count << endl;
	return 0;
}