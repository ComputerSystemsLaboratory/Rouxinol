#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;


using namespace std;
bool priN[1000000]={};
bool pri[1000000]={};

bool isPrime(int n){
	if(priN[n]==true)return pri[n];
	for(int i=3;i<=sqrt((double)n);i++){
		if(n%i==0){
			priN[n]=true;
			pri[n]=false;
			return false;
		}
	}
	priN[n]=true;
	pri[n]=true;
	return true;
}

int main(){
	while(1){
		int n;
		if( !(cin>>n) )break;
		ll sum=1;
		if (n<2) sum--;
		for(int i=3;i<=n;i+=2){
			if(isPrime(i))sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}