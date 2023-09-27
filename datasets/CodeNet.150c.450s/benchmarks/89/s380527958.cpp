#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define N 1000000

int main(void){
	vector<bool> isprime(N+1);
	for(int i=0;i<isprime.size();i++) isprime[i]=true;
	int upto = (int)sqrt(isprime.size());
	isprime[1]=false;
	for(int i=2;i<=upto;++i){
		if(isprime[i]){//消されてなければその倍数を消す
			for(int j=2;i*j<isprime.size();++j) isprime[i*j] = false;
		}
	}
	int a,d,n;
	while(cin>>a>>d>>n,a||d||n){
		vector<int> v;
		for(int i=a;i<=1000000;i+=d){
			if(isprime[i]) v.push_back(i);
			if(v.size()==n){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}