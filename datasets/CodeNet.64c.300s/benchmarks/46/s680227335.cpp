#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
#define INF (1<<29)


bool isPrime(int n){
	if(n<=1)return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int a,d,n;
	while(cin>>a>>d>>n,a|d|n){
		while(1){
			if(isPrime(a) && --n==0)break;
			a+=d;
		}
		cout<<a<<endl;
	}
	return 0;
}