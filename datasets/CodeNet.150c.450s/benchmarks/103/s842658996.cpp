#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <map>
using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,n) for(long long int i=0;i<(n);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;

int n, s, c;

void func(int n, int sum, int max){
	if (n){
		for (int i = max + 1; i < 10; i++){
			func(n - 1, sum + i, i);
		}
	}
	else if (sum==s){
		c++;
		return;
	}
	return;
}

int main(){
	while (cin >> n >> s){
		if (n == 0)break;
		c = 0;
		func(n,0,-1);
		cout << c << "\n";
	}
}