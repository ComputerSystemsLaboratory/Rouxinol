// 2006à\IA fBNÌZpè

#include <iostream>
#include <cstring>

using namespace std;

const int maxP = 1000000;

int main(){
	bool isPrime[maxP];
	isPrime[1] = false;
	for(int i=2;i<maxP;i++) isPrime[i] = true;
	for(int i=2;i<maxP;i++){
		if(!isPrime[i]) continue;
		for(int j=2;i*j<maxP;j++) isPrime[i*j] = false;
	}
	int a, d, n;
	while(cin >> a >> d >> n){
		if(!a) break;
		int count = 1;
		for(int i=a;;i+=d){
			if(isPrime[i]){
				if(count == n) { cout << i << endl; break; }
				else count++;
			}
		}
	}
}