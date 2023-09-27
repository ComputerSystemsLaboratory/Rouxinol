#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>
#include<queue>
#include<complex>
#include<numeric>
#include<bitset>
#define INF 1001001001
#define EPS 1e-8

using namespace std;
typedef vector<int> vint;
typedef vector<vint>  vvint;
typedef pair<int,int> pint;

int p[1000010];

void primes(int n){
	p[0]=p[1]=0;
	for(int i=2;i<n;i++) p[i]=i;
	for(int i=2;i*i<n;i++) if(p[i]) for(int j=i*i;j<n;j+=i) p[j]=0;
}

int main(){
	primes(1000000);
	int a,d,n;
	while(cin >> a >> d >> n){
		if(a==0 && d==0 && n==0) break;
		int c=0;
		for(;;a+=d){
			if(p[a]!=0) c++;
			if(c==n){
				cout << a << endl;
				break;
			}
		}
	}
	return 0;
}