#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int x);

int main(){
	int n; cin>>n;
	int temp,count = 0;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(isprime(temp))
			count++;
	}

	cout<<count<<endl;

}

bool isprime(int x){
	if(x==2) return true;
	if(x<2 || x%2==0) return false;

	int i = 3;
	while(i<=sqrt((double)x)){
		if(x%i==0) return false;
		i += 2;
	}
	return true;
}