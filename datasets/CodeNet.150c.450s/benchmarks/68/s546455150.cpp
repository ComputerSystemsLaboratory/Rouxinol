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
		int N;
		cin >> N;
		if(N == 0)break;
		vector<int> A(N);
		for(int i = 0; i < N; i ++)cin >> A[i];
		sort(all(A));
		int ans = 10000000;
		for(int i = 0; i < N - 1; i ++){
			ans = min(ans, abs(A[i] - A[i + 1]));
		}
		cout << ans << endl;
	}

	return 0;
}
