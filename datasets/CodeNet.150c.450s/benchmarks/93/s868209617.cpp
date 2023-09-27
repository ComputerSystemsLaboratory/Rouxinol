#include <iostream>
#include <ios>
#include <vector>
using namespace std;
#define FOR(i, s, e) for(int i = s; i < e; ++i)
struct Data
{
	char c;
	long v;
	long i;
};
typedef vector<Data> vecD;

int Partition(vecD& vD, int p, int r)
{
	int x = vD[r].v;
	int i = p - 1;
	FOR(j, p, r){
		if (vD[j].v <= x){
			++i;
			swap(vD[i], vD[j]);
		}
	}
	swap(vD[i + 1], vD[r]);
	return i + 1;
}

void QuickSort(vecD& vD, int p, int r)
{
	if (p >= r) return;
	int q = Partition(vD, p, r);
	QuickSort(vD, p, q - 1);
	QuickSort(vD, q + 1, r);
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, v;
	cin >> n;
	vecD vD(n);
	FOR(i, 0, n){
		cin >> vD[i].c >> vD[i].v;
		vD[i].i = i;
	}
	QuickSort(vD, 0, n - 1);
	bool isStable = true;
	FOR(i, 1, n){
		if (vD[i - 1].v != vD[i].v) continue;
		if (vD[i - 1].i > vD[i].i)
			isStable = false;
	}
	cout << (isStable ? "Stable\n" : "Not stable\n");
	FOR(i, 0, n)
		cout << vD[i].c << " " << vD[i].v << "\n";
	return 0;
}