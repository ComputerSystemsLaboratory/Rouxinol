#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool isPrime(long long x){
	if(x == 2)
		return true;
	else if((x < 2) || (x % 2 == 0))
		return false;

	long long i = 3;
	while(i <= sqrt((double)x)){
		if(x % i == 0)
			return false;
		i += 2;
	}

	return true;
}

int main(){
	long long n;
	
	cin>>n;
	cout<<n<<":";

	while(n%2 == 0){
		n /= 2;
		cout<<" 2";
	}

	for(long long i=3;i*i<=n;i+=2){
		if(isPrime(i)){
			while(n%i==0){
				n /= i;
				cout<<" "<<i;
			}
		}
	}

	if(n!=1) cout<<" "<<n;

	cout<<endl;
	return 0;
}