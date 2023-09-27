#include<iostream>
using namespace std;

bool prime(int a){
	if(a==1)return false;
	for(long long i=2;i*i<=a;i++){
		if(a%i==0)return false;
	}
	return true;
}

int main(){
	int a,d,n;
	while(cin>>a>>d>>n && a+d+n!=0){
		int count=0;
		while(count<n){
			if(prime(a))count++;
			a+=d;
		}
		cout<<a-d<<endl;
	}
}