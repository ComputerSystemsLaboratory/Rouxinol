#include <iostream>
#include <stdio.h>
using namespace std;

bool IsPrime(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}

int main() {
	int n;
	cin >> n;
	cout << n <<":";
	
	if(IsPrime(n)) cout << " " << n;
	
	else{
		while(IsPrime(n)!=true){
		for(int i=2;i<=n&&n!=1;i++){
			while(n%i == 0){
				if(n%i==0){
					printf(" %d",i);
					n /= i;
				}
			}
		}
	}
	}
	cout << endl;
	return 0;
}
