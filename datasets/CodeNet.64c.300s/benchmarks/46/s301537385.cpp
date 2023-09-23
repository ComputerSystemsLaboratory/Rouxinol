#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_=10000000;
bool is_prime[MAX_];

void sieve(){
	fill(is_prime,is_prime+MAX_,true);
	is_prime[0]=is_prime[1]=false;
	for(int i=2; i<MAX_; ++i){
		if(is_prime[i]){
			for(int j=i*2; j<MAX_; j+=i){
				is_prime[j]=false;
			}
		}
	}
}

int solve(int a,int d,int n){
	int count=0;
	int idx=a;
	while(count!=n){
		if(is_prime[idx]) ++count;
		idx+=d;
	}
	idx-=d;
	return idx;
}

int main(){
	sieve();
	int A,D,N;
	while(cin >> A >> D >> N&&!(A==0&&D==0&&N==0)){
		cout << solve(A,D,N) << endl;
	}
	return 0;
}