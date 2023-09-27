#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <queue>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <climits>
//#include "h.h"
using namespace std;

#define ll long long
#define pint pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define pm(first, second) pb(mp(first, second))
#define SPACE " "
#define fpf first.first
#define fps first.second
#define spf second.first
#define sps second.second

#define all(X) (X).begin(), (X).end()

int main(){

	while(true){
		int x, y, s;
		cin >> x >> y >> s;
		if(x == 0 && y == 0 && s == 0)break;

		int ans = 0;
		for(int i = 1; i <= s; i ++){
			for(int j = 1; i * (100 + x) / 100 + j * (100 + x) / 100 <= s; j ++){
				if(i * (100 + x) / 100 + j * (100 + x) / 100 == s){
					ans = max(ans, i * (100 + y) / 100 + j * (100 + y) / 100);
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}
