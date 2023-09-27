#include<iostream>
using namespace std;

long factorial(int n){
	long ans = 1;
	for(int i = n; i > 0; --i)
		ans *= i;
	return ans;
}

int main(){
	int input;
	cin >> input;
	cout << factorial(input) << endl;
	return 0;
}