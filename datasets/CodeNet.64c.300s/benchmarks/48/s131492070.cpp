#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_N=999999;

bool prime[MAX_N+1];
int p[MAX_N+1];

int main(){
	fill(prime,prime+MAX_N+1,true);
	for (int i=2;i<=MAX_N;i++){
		if (prime[i]){
			for (int j=2*i;j<=MAX_N;j+=i){
				prime[j]=false;
			}
		}
	}
	p[1]=0;
	for (int i=2;i<=MAX_N;i++){
		p[i]=p[i-1]+(prime[i] ? 1 : 0);
	}
	int n;
	while (cin>>n){
		cout<<p[n]<<endl;
	}
	return 0;
}