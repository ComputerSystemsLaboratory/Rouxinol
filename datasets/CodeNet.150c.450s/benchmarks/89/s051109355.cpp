#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <cstring>
#include <climits>
#include <queue>
#include <map>
#include <sstream>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define EPS 1e-9

bool primes[1000001];
void make_prime(){
	primes[0]=primes[1]=true;
	for(int i=2; i*i<=1000001; i++)if( !primes[i] )
		for(int j=i*2; j<1000001; j+=i)primes[j]=true;
}
int main(){
	int a,d,n;
	make_prime();
	while(cin>>a>>d>>n,a|d|n){
		for(int i=a; ; i+=d){
			if( !primes[i] )n--;
			if( !n ){
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}