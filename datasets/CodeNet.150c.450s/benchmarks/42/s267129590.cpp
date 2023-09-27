#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

int main() {

	int N, Q;
	cin >> N >> Q;

	queue<pair<string, int>> q;
	rep(i, N){
		pair<string, int> p;
		cin >> p.first >> p.second;
		q.push(p);
	}

	int tm = 0;

	while (!q.empty()){
		pair<string, int> p = q.front(); q.pop();
		if (p.second <= Q){
			tm += p.second;
			cout << p.first << " " << tm << endl;
		}
		else{
			tm += Q;
			p.second -= Q;
			q.push(p);
		}
	}
}