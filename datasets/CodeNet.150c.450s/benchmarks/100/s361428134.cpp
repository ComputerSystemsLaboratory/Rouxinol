#include<iostream>
using namespace std;

long long kaijo(int n){
	if(n <= 1)
		return 1;
	return (long long)n*kaijo(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << kaijo(n) << endl;
	return 0;
}