#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int a){
	for ( int i = 3; i <= sqrt(a); i+=2){
		if (a%i == 0) return false;
	}
	return true;
}
int main(){
	int n; cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++){
		int num; cin >> num;
		if(num == 2){
			count++;
		}else if(num%2 == 0) {
			;
		}else if(isPrime(num)){
			count++;
		}
	}
	cout << count << endl;
return 0;
}