#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long int ll;
typedef vector<long long int> vi;

int main(){
	ll n,m=100000;
	cin >> n;
	REP(i, n){
		m *= 105;
		m /= 100;
		if (m % 1000 != 0){
			m -= m % 1000;
			m += 1000;
		}
	}
	cout << m << "\n";
}