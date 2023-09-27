#include <iostream>
#include <cmath>
using namespace std;

int div(int n);

int main(){
	int num;
	cin >> num;
	cout << num << ":";

	while(num!=1){
		cout << " " << div(num);
		num = num / div(num);
	}
	cout << endl;
}

int div(int n){
	if(n%2 == 0) return 2;
	int s=sqrt(n);
	for(int i=3; i<=s; i+=2){
		if(n%i == 0) return i;
	}

	return n;
}