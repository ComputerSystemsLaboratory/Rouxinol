#include<iostream>
using namespace std;
typedef long long int long64;

long64 fact(long64 n){
	if(n==1) return 1;
	else return(n*fact(n-1));
}

int main(void){
	int n;
	cin >> n;
	cout << fact((long64)n) << endl;
	return 0;
}