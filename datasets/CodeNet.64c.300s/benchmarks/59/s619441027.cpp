#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x);

int main(){
	int n=0; 
	int a[10000]={};
	int z=0; //output
	
	cin >> n;
	for(int i=0;i<10000;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		if(isPrime(a[i])==true){
			z++;
		}
	}
	cout <<z<<endl;
}
bool isPrime(int x){
	if(x==2) return true;
	if(x<2||x%2==0) return false;
	int i=3;
	while(i<=sqrt(x)){
		 if (x%i==0)return false;
		i= i+2;
	}
	return true;
}