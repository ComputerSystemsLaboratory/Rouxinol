
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>
#include <climits>
#include <set>

using namespace std;

double sq(double x){return x*x;}

int main(){
	int n,s;
	while(cin>>n>>s,(n||s)){
		int comb = (1 << n) - 1;
		int ans = 0;
		while(comb < (1 << 10)){
			int x = comb & -comb,y = comb + x;

			int sum = 0;
			for (int i = 0; i < 10; i++)
			{
				if(comb & (1 << i)){
					sum += i;
				}
			}
			if(sum == s) ans++;

			comb = ((comb & ~y) / x >> 1) | y;
		}

		cout << ans << endl;
	}

	return 0;
}