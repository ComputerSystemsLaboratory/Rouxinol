#include<iostream>
#include<cmath>
using namespace std;

int Isprime(int a){
	if(a == 1)
		return 0;
	int q = sqrt(a);
	for(int i = 2; i <= q; i++){
		if(a%i == 0)
			return 0;
	}
	return 1;
}

int main(){
	int n, t, cnt = 0;
	cin>>n; 
	while(n--){
		cin>>t;
		if(Isprime(t))	cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
