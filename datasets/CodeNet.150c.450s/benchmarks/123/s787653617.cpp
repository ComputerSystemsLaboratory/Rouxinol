// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C&lang=jp

#include <iostream>
#include <vector>
using namespace std;

class SieveManager{
protected:
	vector<bool> sieve;
	vector<int> primes;
public:
	int maxN;
	SieveManager(int aMaxN);
	void doSieve();
	bool isPrime(int p);
};

SieveManager::SieveManager(int aMaxN){
	maxN = aMaxN;
	for(int n = 0; n <= aMaxN; n++){
		sieve.push_back(true);
	}
	sieve[0] = false; // 0 is not prime
	sieve[1] = false; // 1 is not prime
}

void SieveManager::doSieve(){
	for (int index = 2; index <= maxN; index++){
		if (sieve[index] == false){
			continue;
		}
		primes.push_back(index);
		for (int removeIndex = index*2; removeIndex <= maxN; removeIndex += index){
			sieve[removeIndex] = false;
		}
	}
}

bool SieveManager::isPrime(int p){
	if (p <= maxN){
		return sieve[p];
	} else {
		for (auto it = primes.begin(); it != primes.end(); it++){
			if (p % (*it) == 0){
				return false;
			}
		}
		return true;
	}
}

int main(){
	SieveManager sieve(10000);
	sieve.doSieve();

	int numOfNums, count = 0, input;
	cin >> numOfNums;
	for (int n = 0; n < numOfNums; n++){
		cin >> input;
		if (sieve.isPrime(input)){
			count++;
		}
	}

	cout << count << endl;

	return 0;
}