#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>
#include <bitset>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 10e7+9
#define MOD 1000000007
#define EPS 1e-10
#define MAX_N 100100
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int n, k;
int w[100100];

bool C(int mid){
	int sum = 0, cnt = 1;
	for (int i = 0; i < n; i++){
		if (w[i] > mid)return false;
		if (sum + w[i] > mid){
			sum = w[i];
			cnt++;
		}
		else{
			sum += w[i];
		}
	}
	if (cnt > k)return false;
	return true;
}

int main(){
	int r = 0, l = 1000100000;
	cin >> n >> k;
	REP(i, n){
		cin >> w[i];
	}
	while (l - r >= 1){
		int mid = (r + l) / 2;
		if (C(mid)){
			l = mid;
		}
		else{
			r = mid + 1;
		}
		//cout << r << " " << l << endl;
	}
	cout << r << endl;
}