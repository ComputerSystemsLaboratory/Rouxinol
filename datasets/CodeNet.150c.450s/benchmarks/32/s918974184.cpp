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
		int m, nmin, nmax;
		cin >> m >> nmin >> nmax;
		if(m == 0 && nmin == 0 && nmax == 0)break;
		vector<int> P(m);
		for(int i = 0; i < m; i ++)cin >> P[i];
		int ans = nmin, gap = 0;
		for(int i = nmin; i <= nmax; i ++){
			if(gap <= P[i - 1] - P[i]){
				gap = P[i - 1] - P[i];
				ans = i;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
