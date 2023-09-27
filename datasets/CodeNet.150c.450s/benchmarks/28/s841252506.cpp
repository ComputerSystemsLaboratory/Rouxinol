#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

#define MAX 100000
typedef long long llong;

class Allocation
{
	int pasNum;
	int truckNum;
	
public:
	llong cargo[MAX];
	int checkPas(llong p);
	Allocation(int x, int y) { truckNum = x; pasNum = y; }	
	llong solve();
};

int Allocation::checkPas(llong p)
{
	llong mnt;
	int cnt = 0, trk = 1, j = 0;

	for (int i = 0; i < truckNum; i++) {
		mnt = 0;
		while (mnt + cargo[j] <= p) {
			mnt += cargo[j];
			j++;
			//cout << i << " " << mnt << " " << j << endl;
			if (j == pasNum) return j;
		}
		/*for (mnt = 0; mnt + cargo[j] <= p; j++) {
			mnt += cargo[j];
			
			if (j == pasNum) return j;
		}*/
	}
	return j;
}

llong Allocation::solve()
{
	llong mid, left = 0, right = MAX * 10000;
	while ( right - left > 1) {
		mid = (left + right) / 2;
		int p = checkPas(mid);
		if (p < pasNum ) left = mid;
		else right = mid;
		//cout << left << " " << " " << right << endl << p << endl;
	}
	return right;
}

int main()
{
	int n, k, i;
	llong w;
	scanf("%d %d", &n, &k);
	Allocation all(k, n);

	for (i = 0; i < n; i++)
		cin >> all.cargo[i];

	//cout << all.checkPas(10) << endl;
	cout << all.solve() << endl;
	return 0;
}