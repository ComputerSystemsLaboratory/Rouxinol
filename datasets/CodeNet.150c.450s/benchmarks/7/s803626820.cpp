#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long int ll;
typedef vector<long long int> vi;

int main(){
	vi v;
	ll m;
	REP(i, 10){
		cin >> m;
		v.push_back(m);
	}
	sort(ALL(v));
	REP(i, 3){
		cout << v[9-i] << "\n";
	}
	return 0;
}