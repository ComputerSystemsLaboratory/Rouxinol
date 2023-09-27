#include <iostream>
#include <cmath>
using namespace std;

bool check(int in){
	for (int i = 3; i<=sqrt(in); i+=2){
		if (i != 5 && i % 5 == 0)	continue;
		if (in % i == 0)
			return false;
	}
	return true;
}

int PrimeNumber(int in, int start){
	int count = 0;
	if (in >= 2 && start==3)	count++;
	for (int i = start; i <=in; i+=2){
		if (check(i))	count++;
	}

	return count;
}

int main(){
	int in;
	int count250000 = PrimeNumber(250000, 3);
	int count500000 = count250000 + PrimeNumber(500000, 250001);
	int count750000 = count500000 + PrimeNumber(750000, 500001);

	while (cin >> in, !cin.eof()){
		if (in <= 250000)
			cout << PrimeNumber(in, 3) << endl;
		else if (in <= 500000)
			cout << count250000 + PrimeNumber(in, 250001) << endl;
		else if (in <= 750000)
			cout << count500000 + PrimeNumber(in, 500001) << endl;
		else
			cout << count750000 + PrimeNumber(in, 750001) << endl;
	}
}