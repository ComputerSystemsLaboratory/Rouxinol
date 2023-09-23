#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int x){
	if(x == 2) return true;
	if(x < 2 || x % 2 == 0){
		return false;
	}
	
	for(int i = 3; i <= sqrt(x); i+=2){
		if(x % i == 0) return false;
	}
	return true;
}
int main(){
	int n;
	int num;
	int count = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> num;
		if(isprime(num)) count++;
	}
	
	cout << count << endl;

	return 0;
}