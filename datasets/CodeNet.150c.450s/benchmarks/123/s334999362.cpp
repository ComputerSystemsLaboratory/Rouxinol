#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool isPrime(long x){
	if(x == 2)
		return true;
	else if((x < 2) || (x % 2 == 0))
		return false;

	int i = 3;
	while(i <= sqrt((double)x)){
		if(x % i == 0)
			return false;
		i += 2;
	}

	return true;
}

int main(){
	int n, count = 0;
	long num;
	vector<long> p;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		p.push_back(num);
	}
	
	for(int i=0;i<n;i++)
		if(isPrime(p[i]))
			count++;

	cout<<count<<endl;	
	
	return 0;
}