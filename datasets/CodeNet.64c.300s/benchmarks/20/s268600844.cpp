#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <map>
#include <numeric>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;
typedef vector<long long int> vi;
typedef vector<long long int>::iterator vit;

int main(){
	ll d, s = 0;
	while (cin >> d){
		REP(i, 600 / d - 1){
			s += pow((i + 1)*d, 2)*d;
		}
		cout << s << "\n";
		s = 0;
	}
	return 0;
}