#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int a,d,n;

	//ifstream fin("in.txt");

	//fin >> a >> d >> n;
	cin >> a >> d >> n;

	int prime[100000];
	int ite = 4;
	prime[0] = 2;
	prime[1] = 3;
	prime[2] = 5;
	prime[3] = 7;

	int i,j;
	for(i = 11; i < 1000000; i++) {
		if(i%2==0 || i%3==0 || i%5== 0 || i%7 == 0) goto NOT_PRIME;
		for(j = 0; j < ite; j++) {
			if(i%prime[j]==0) {
				goto NOT_PRIME;
			}
			if(prime[j]*prime[j] > i) break;
		}

		prime[ite] = i;
		ite++;

		NOT_PRIME:
		;
	}

	while(!(a==0&&d==0&&n==0)) {
		int count = 0;
		int primeCount = 0;
		while(1) {
			int arrNumber = a+count*d;
/*
			for(i = 0; i < ite; i++) {
				if(prime[i] == arrNumber) {
					primeCount++;
					break;
				}
			}
*/

			int max = ite;
			int min = 0;
			while(1) {
				if(max-min<=1) {
					if(prime[max]==arrNumber || prime[min]==arrNumber) {
						primeCount++;
					}
					break;
				}
				int half = (max+min)/2;
				if(arrNumber<prime[half]) max = half;
				else if(arrNumber>prime[half]) min = half;
				else {
					primeCount++;
					break;
				}
			}

			if(primeCount >= n) {
				cout << arrNumber << endl;
				break;
			}
			count++;
		}

		//fin >> a >> d >> n;
		cin >> a >> d >> n;
	}
	return 0;
}