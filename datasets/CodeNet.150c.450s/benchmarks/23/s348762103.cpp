#include<iostream>
using namespace std;

int F[44];

int fib(int n){
	if(n==0||n==1){
		return F[n]=1;
	}
	if(F[n]!=-1){
		return F[n];
	}
	return F[n]=fib(n-1) + fib(n-2);
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		F[i]=-1;
	}
	cout<<fib(n)<<endl;
	
	return 0;
}