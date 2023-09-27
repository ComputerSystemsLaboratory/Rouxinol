#include<iostream>
using namespace std;

int fib(int n);

int main(){
	int n;
	cin >> n;
	cout << fib(n) << endl;
}
	
int fib(int n){
	int num1 = 1,num2 = 1;
	int temp = 0;
	if(n == 0 || n == 1) return 1;
	
	for (int i = 1;i < n;i++){
		temp = num2;
		num2 = num1 + num2;
		num1 = temp;
	}
		return num2;
}