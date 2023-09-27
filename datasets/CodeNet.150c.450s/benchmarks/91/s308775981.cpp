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
typedef vector<long long int>::iterator vit;

int main(){
	vi v(1000010, 1);
	vi copy(1000011, 1);
	ll n, c = 0;
	double rt;

	v[0] = 0;

	while (cin >> n){
		rt = sqrt(n);
		FOR(i, 1, rt){
			if (v[i] == 1){
				for (int j = i + 1; (i + 1)*j <= n; j++){
					v[(i + 1)*j - 1] = 0;
				}
			}
		}
		REP(i, n){
			if (v[i] == 1)c++;
		}
		cout << c << "\n";
		c = 0;
	}
}