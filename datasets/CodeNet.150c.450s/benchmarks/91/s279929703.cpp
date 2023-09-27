#include <iostream>
#include <vector>

#define MAX_MAX 1000010

using namespace std;

bool isChecked[MAX_MAX];
vector <int> prime;

int CountPrimeNum(int max) {
	
	int count = 0;
	for (int i = 0; i < MAX_MAX; i++) {
		if (prime[i] > max) break;
		count++;
	}	
	return count;
}


int main() {
	for(int i = 0; i < MAX_MAX; i++) {
		isChecked[i] = false;
	}
	
	isChecked[0] = true;
	isChecked[1] = true;
	
	for (int i = 2; i < MAX_MAX; i++) {
		if(isChecked[i]) continue;
		
		prime.push_back(i);
		
		for (int j = 1;j * i < MAX_MAX;j++) {
			isChecked[i*j] = true;
		}
	}
	
	int n;
	while(cin >> n) {
		cout << CountPrimeNum(n) << endl;
	}
	
	return 0;
}