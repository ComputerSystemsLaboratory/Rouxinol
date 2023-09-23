#include <iostream>
using namespace std;

bool isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return n!=1;
}

int main() {
	int n, a[10000], sum=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
	cin>>a[i];
	if(isPrime(a[i]))
	sum++;
	}
	
	cout<<sum<<endl;
	return 0;
}