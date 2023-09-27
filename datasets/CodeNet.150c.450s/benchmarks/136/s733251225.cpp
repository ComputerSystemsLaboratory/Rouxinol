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
	ll a, b, da, db, c, GCD, LCM = 0, k = 0;
	bool f;
	while (cin >> a >> b){
		da = a;
		db = b;
		if (a > b){
			k = a;
			a = b;
			b = k;
		}
		while (1){
			c = b%a;
			if (c == 0){
				GCD = a;
				break;
			}
			b = a;
			a = c;
		}
		LCM = da*db / GCD;
		cout << GCD <<" "<< LCM << "\n";
	}
}