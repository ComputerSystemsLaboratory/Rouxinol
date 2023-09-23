#include <bits/stdc++.h>
using namespace std;

/*
vector<int> primes={};

bool is_prime(int m){
	if(m==2){
		primes.push_back(2);
		return true;
	}
	int M=(int)sqrt(m)+1;
	for(int i=0; i<(int)primes.size();++i){
		if(m%primes[i]==0){
			return false;
		}
		if(primes[i]<M){
			return true;
		}
	}
	int max_prime=primes.back();
	for(int k=max_prime+1; k<M; ++k){
		if(is_prime(k)){
			primes.push_back(k);
			if(m%k==0){
				return false;
			}
		}
	}
	return true;
}
*/

bool is_prime(int m){
	int M=(int)sqrt(m);
	for(int i=2; i<=M; ++i){
		if(m%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int result=0;
	for(int i=0; i<n; i++){
		int m;
		cin>>m;
		if(is_prime(m)){
			result++;
		}
	}
	cout<<result<<endl;
}