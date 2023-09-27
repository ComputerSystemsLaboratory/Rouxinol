#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
#include<list>

using namespace std;

typedef  long long int lint;

#define rep(i, n) for (lint i = 0; i < n; i++)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define llower(v,hoge) *lower_bound(v.begin(), v.end(), hoge)
#define lupper(v,hoge) *upper_bound(v.begin(), v.end(), hoge)
#define mp make_pair
#define IP pair<int,int>
#define enld endl

int main() {
	vector<int>A(4);
	vector<int>B(4);
	while (cin >> A[0] >> A[1] >> A[2] >> A[3] >> B[0] >> B[1] >> B[2] >> B[3]) {
		int ans1 = 0;
		int ans2 = 0;
		rep(i, 4) {
			if (A[i] == B[i]) {
				ans1++;
			}
		}
		rep(i, 4) {
			rep(j, 4) {
				if (A[i] == B[j]) {
					ans2++;
				}
			}
		}
		cout << ans1 << ' ' << ans2 - ans1 << endl;
	}
}
