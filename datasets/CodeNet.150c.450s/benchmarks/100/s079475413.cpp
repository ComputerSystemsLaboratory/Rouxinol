#include <iostream>
using namespace std;

unsigned long long int fact(int n,unsigned long long int s){
	if(n == 0){
		return 1;
	}else if(n == 1){
		return s;
	}else{
		return fact(n-1,n*s);
	}
}

int main(){
	int n;
	cin >> n;
	cout << fact(n,1) << endl;
	return 0;
}