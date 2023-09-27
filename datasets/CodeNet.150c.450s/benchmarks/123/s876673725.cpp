//last edited at 26.8.2015 by charis

#include<iostream>
#include<cmath>
using namespace std;

/* Time Limit Exceeded  
bool isPrime(int x){
	if(x<=1) return false;
	for(int i=2; i<x; i++){
		if(x%i==0) return false;
	}
	return true;
}
*/

bool isPrime(int x){ 
	if(x==2) return true;
	if(x<=1 || x%2==0) return false; 
	for(int i=3; i<=sqrt(x); i+=2){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
	int N;	
	cin >> N;
	int A[N];
	for(int i=0; i<N; i++){
		cin >>A[i];
	}
	int c=0;
	for(int i=0; i<N; i++){
		if(isPrime(A[i])) c++;
	}
	cout << c << endl;
	return 0;
}