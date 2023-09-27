#include <iostream>
using namespace std;

long F[45] = {};

void calcfib(){
	for (long i = 0; i < 45; i++){
		if (i == 0 || i == 1) F[i] = 1;
		else F[i] = F[i - 1] + F[i - 2];
	}
}

int main(){
	long n;
	cin >> n;
	calcfib();
	cout << F[n] << endl;
	return 0;
}