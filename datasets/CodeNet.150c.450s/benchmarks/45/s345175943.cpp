#include <iostream>
#define DIVISOR 1000000007
#define ULLI unsigned long long int
using namespace std;
ULLI sq(ULLI n){
	return n*n;
}

ULLI binarypower(ULLI m, ULLI b){
	if(b==1)return m;
	return sq(binarypower(m, b-1)) % DIVISOR;
}

ULLI power(ULLI m, ULLI n){
	ULLI prod=1;
	for(int i=0;i<32;++i){
		if(n & (1<<i)){
			prod = (prod * binarypower(m,i+1)) % DIVISOR;
		}
	}
	return prod;
}

int main() {
	ULLI m,n;
	cin>>m>>n;
	cout<<power(m,n)<<endl;
	return 0;
}