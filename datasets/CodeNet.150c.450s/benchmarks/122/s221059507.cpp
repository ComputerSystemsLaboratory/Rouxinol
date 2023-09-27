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
typedef vector<ll> V;

string s;
priority_queue<int> que;

int main(){
	while (cin >> s&&s != "end"){
		if (s == "insert"){
			int n;
			cin >> n;
			que.push(n);
		}
		else{
			cout << que.top() << endl;
			que.pop();
		}
	}
}