#include<iostream>
using namespace std;

int isPrime(int);
int count;
int find(int a,int d,int n){
	for(;;){
		if(isPrime(a))count++;
		if(count==n)return a;
		a+=d;
	}

}
int main(){
	int a,d,n;
	for(;;){
		cin >>a>>d>>n;
		if(!(a||d||n))break;
		count=0;
		cout<<find(a,d,n)<<endl;
	}
	return 0;
}
int isPrime(int n){
	int i;
	if(n==2)return 1;
	if(n==1||n%2==0)return 0;
	for(i=3;i*i<=n;i+=2){
		if(n%i==0)return 0;
	}
	return 1;
}