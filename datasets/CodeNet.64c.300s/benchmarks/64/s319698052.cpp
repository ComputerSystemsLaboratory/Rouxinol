#include <iostream>
#include <string>
using namespace std;

int gcd(int,int);

int main(){
	int a,b;
	cin >> a >> b;
	if(a<b){
		int w=a;
		a= b;
		b = w;
	}
	cout << gcd(a,b)<<endl;
	return 0;
}

int gcd(int a,int b){
	if(a==b) return a;
	int k;
	k=a%b;
	while(k){
		a=b;
		b=k;
		if(a%k==0) return k;
		else k=a%k;
	}
}