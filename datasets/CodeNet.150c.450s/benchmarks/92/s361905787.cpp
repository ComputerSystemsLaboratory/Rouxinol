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
	ll a, b, i = 0;
	char s[10] = {};
	while (cin >> a >> b){
		sprintf(s, "%d", a + b);
		cout << strlen(s) << "\n";
	}
	return 0;
}