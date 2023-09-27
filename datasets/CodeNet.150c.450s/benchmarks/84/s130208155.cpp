#include <iostream>
#include <vector>
#include <ios>
#include <limits.h>
using namespace std;
#define FOR(i, s, e) for(int i = s; i < e; ++i)
typedef vector<long> vec;
long long c = 0;

void Merge(vec& vA, int l, int m, int r)
{
	int n1 = m - l;
	int n2 = r - m;
	vec vL(n1 + 1, 0);
	vec vR(n2 + 1, 0);
	FOR(i, 0, n1) vL[i] = vA[l + i];
	FOR(i, 0, n2) vR[i] = vA[m + i];
	vL[n1] = LONG_MAX;
	vR[n2] = LONG_MAX;
	int s = 0, t = 0;
	FOR(i, l, r){
		if ( vL[s] > vR[t]){
			vA[i] = vR[t];
			++t;
			c += n1 - s;
		}else{
			vA[i] = vL[s];
			++s;
		}
	}
}

void CountCross(vec& vA, int l, int r)
{
	if (l + 1 >= r) return;
	int m = (l + r) / 2;
	CountCross(vA, l, m);
	CountCross(vA, m, r);
	Merge(vA, l, m, r);
}

int main()
{
	int n;
	cin >> n;
	vec vA(n, 0);
	FOR(i, 0, n) cin >> vA[i];
	CountCross(vA, 0, n);
	cout << c << "\n";
	return 0;
}