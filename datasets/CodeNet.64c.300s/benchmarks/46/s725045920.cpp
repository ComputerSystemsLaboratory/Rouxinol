#include <iostream>
#include <algorithm>

using namespace std;

#define PRIMEMAX 1000000
bool isPrime[PRIMEMAX];
//ツエツδ可トツスツテツネツスツづ個づ督づゥツつ「ツづーツ用ツつ「ツづ渉可甘コツ可サ
void initErt() {
	//ツ全ツ閉杯rueツづ鳴づ淞づゥ
	fill_n(isPrime, PRIMEMAX, true);
	isPrime[0] = false;
	isPrime[1] = false;
	//ツ閉スツ陛サツ債ェツづ慊づ個ゥツづェツづ篠づヲツつ「
	for (int i = 2; i * i < PRIMEMAX; i++) {
		if (!isPrime[i]) continue;
		//iツづ債素ツ青板ィツつサツづ個倍ツ青板づ債全ツづ素ツ青板づづ債づ按つ「
		for (int j = (i << 1); j < PRIMEMAX; j += i) {
			if (!isPrime[j]) continue;
			isPrime[j] = false;
		}
	}
}

int main() {
	initErt();
	
	int a, d, n;
	while (1) {
		cin >> a >> d >> n;
		if (a == 0 && d == 0 && n == 0) break;
		
		int count = 0;
		for (;;a += d) {
			if (isPrime[a]) {
				count++;
				if (count == n) {
					cout << a << endl;
					break;
				}
			}
		}
	}
	
	return 0;
}