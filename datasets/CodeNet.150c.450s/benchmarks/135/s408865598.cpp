//#include <bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<bitset>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<string.h>
#include<cmath>
#include<utility>
#include<functional>
#include<map>
#include<set>


#define FOR(i, a, b) for( int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for( int i=(a);i>=(b);i--)
#define LFOR(i, a, b) for( long long int i=(a);i<=(b);i++)
#define LRFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979
#define MAXI 7500000

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;


int main(void) {
	
	while (1) {
		int n, m;
		int h, w;
		int count = 0;
		vector<int> dph(1550000, 0), dpw(1550000, 0);
		vector<int> hi(1501, 0), we(1501, 0);

		cin >> n >> m;
		if (n == 0) {
			break;
		}
		FOR(i, 1, n) {
			cin >> h;
			hi[i] = hi[i - 1] + h;
		}
		FOR(i, 1, m) {
			cin >> w;
			we[i] = we[i - 1] + w;
		}
		FOR(i, 1, n) {
			FOR(j, 0, i - 1) {
				dph[hi[i] - hi[j]]++;
			}
		}
		FOR(i, 1, m) {
			FOR(j, 0, i - 1) {
				dpw[we[i] - we[j]]++;
			}
		}
		
		/*FOR(i, 1, 50) {
			cout << i << " " << dph[i] << " " << dpw[i] << endl;
		}*/

		FOR(i, 1, 1540000) {
			count += dph[i] * dpw[i];
		}
		cout << count << endl;
	}

	return 0;
}
