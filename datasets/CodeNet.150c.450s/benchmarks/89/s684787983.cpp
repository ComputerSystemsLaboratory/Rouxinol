#include <iostream>
#include <string.h>

using namespace std;

int main(){
	bool isPrime[1000000]; 
	memset(isPrime, true, sizeof(isPrime));
	isPrime[1] = false;
	for(int i=2;i<1000000;i++){
		for(int j=2;i*j<1000000;j++) isPrime[i*j] = false;
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