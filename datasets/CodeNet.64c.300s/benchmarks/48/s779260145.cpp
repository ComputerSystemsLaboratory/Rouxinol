#include <iostream>

using namespace std;

bool eratosthenes[1000000];

int main()
{
	for (int i=0; i<1000000; i++) eratosthenes[i] = true;		
	eratosthenes[0] = eratosthenes[1] = false;
	
		for (int i=2; i<1000000; i++) {
		if (!eratosthenes[i]) continue;
		for (int j=2; i*j<1000000; j++) eratosthenes[i*j] = false;
	}
	
	int n;
	while (cin >> n) {
	
		int count = 0;
		for (int i=0; i<=n; i++) {
			if(eratosthenes[i]) count++;
		}
		
		cout << count << endl;
	}
	
	return 0;
}