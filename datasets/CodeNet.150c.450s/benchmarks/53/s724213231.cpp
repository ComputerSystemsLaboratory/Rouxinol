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
#define P pair<int,int>
#define enld endl

vector<lint> prime_factorization(lint N) {
	//素因数分解して配列で返す
	vector<lint> R;
	if (N < 2)return R;
	for (lint i = 2; i * i <= N; i++) {
		while (N % i == 0) {
			R.push_back(i);
			N /= i;
		}
	}
	if (N != 1) {
		R.push_back(N);
	}
	return R;
}

int main() {
	lint N;
	cin >> N;
	vector<lint>V = prime_factorization(N);
	cout << N << ':';
	rep(i, V.size()) {
		cout << ' ' << V[i];
	}
	cout << enld;
}
