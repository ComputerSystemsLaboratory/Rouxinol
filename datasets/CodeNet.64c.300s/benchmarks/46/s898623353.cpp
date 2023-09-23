#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

const int MAX_SIZE = 1000000;

int prime[MAX_SIZE];
bool isPrime[MAX_SIZE];
int p;

int main(){

	fill(isPrime,isPrime+MAX_SIZE,true);
	p = 0;
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i <= MAX_SIZE; i++){
		if(isPrime[i]){
			prime[p++] = i;
		}
		else
			continue;
		for(int j = 2*i; j <= MAX_SIZE; j+=i){
			isPrime[j] = false;
		}
	}
	
	int a,d,n;
	while(cin >> a >> d >> n && !(a == 0 && d == 0 && n == 0)){
		int cnt = 0;
		for(int i = 0; ;i++){
			int num = a + i*d;
			if(isPrime[num]){
				cnt++;
			}
			if(cnt == n){
				cout << num << endl;
				break;
			}
		}
	}

	return 0;
}