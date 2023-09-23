#include <iostream>
using namespace std;

long long int factorial(int n);

int main(){
	
    int i;
	
	cin >> i;
	
	cout << factorial(i) << endl;
	
	return 0;
}

long long int factorial(int n){

	if(n==1){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}
	