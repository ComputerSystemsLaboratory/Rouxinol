#include<iostream>
using namespace std;

#define N_MAX 45

int table[N_MAX];

int fib(int n){
	if(n==0 || n==1) return 1;
	if(table[n]) return table[n];
	return (table[n]= fib(n-2)+fib(n-1));
}

int main()
{
	for(int i=0; i<N_MAX; i++) table[i] = 0;
	
	int n;
	cin >> n;
	cout << fib(n) << endl;

	return 0;
}