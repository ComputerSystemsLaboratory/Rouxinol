#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1000000;
bool prime[MAX] = { true };
int pcount[MAX];

int main(){
	int n;
	prime[0] = prime[1] = false;
	for(int i = 2;i < MAX;++i) prime[i] = true;
	for(int i = 2;i <= sqrt(MAX);++i){
		if(prime[i]){
			for(int j = i + i;j < MAX;j += i){
				prime[j] = false;
			}
		}
	}
	pcount[0] = 0;
	for(int i = 1;i < MAX;++i){
		pcount[i] = pcount[i - 1];
		if(prime[i]) pcount[i]++;
	}
	while(cin >> n){
		cout << pcount[n] << endl;
	}
	return 0;
}