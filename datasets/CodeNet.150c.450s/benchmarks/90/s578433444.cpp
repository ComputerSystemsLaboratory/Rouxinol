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
	int n,c = 0;
	int a[110] = {};
	while (cin >> n){
		a[n]++;
		if (c < a[n]){
			c++;
		}
	}
	REP(i, 100){
		if (a[i] == c){
			cout << i << "\n";
		}
	}
}