#include <iostream>
#include <ios>
#include <vector>
#include <limits.h>
using namespace std;
#define FOR(i, s, e) for(int i = s; i < e; ++i)
#define FOR_M(i, s, e) for(int i = s; i >= e; --i)
typedef vector<long> vec;
void CountingSort(vec& vA, vec& vB, int k)
{
	vec vC(k + 1, 0);
	FOR(i, 0, vA.size()) 
		++vC[vA[i]];
	FOR(i, 1, k + 1) 
		vC[i] += vC[i - 1];
	FOR_M(i, vA.size() - 1, 0) 
		vB[--vC[vA[i]]] = vA[i];
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	long n;
	cin >> n;
	vec vA(n, 0);
	vec vB(n, 0);
	long maxV = LONG_MIN;
	FOR(i, 0, n){
		cin >> vA[i];
		if (maxV < vA[i])
			maxV = vA[i];
	}
	CountingSort(vA, vB, maxV);

	FOR(i, 0, n){
		cout << vB[i];
		if (i < n - 1)
			cout << " ";
	}
	cout << "\n";	
	return 0;
}