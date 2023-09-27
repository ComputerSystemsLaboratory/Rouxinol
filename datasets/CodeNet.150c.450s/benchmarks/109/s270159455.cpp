#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL


typedef struct{
	int s,g;
}Time;

void swap_Time(Time *x, Time *y) {
	Time tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort_by_s(Time a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j - 1].s > a[j].s)swap_Time(&a[j - 1], &a[j]);
		}
	}
}


int main() {
	int   hhs, mms, sss, hhg, mmg, ssg, cnt = 1;
	Time yamanote[10000];
	bool f[10000];
	for (int n; cin >> n&&n;) {
		for (int i = 0; i < n; i++) {
			char c;
			cin >> hhs >> c >> mms >> c >> sss >> hhg >> c >> mmg >> c >> ssg;

			yamanote[i].s = 3600 * hhs + 60 * mms + sss;
			yamanote[i].g = 3600 * hhg + 60 * mmg + ssg;
			f[i]=0;
		}

		sort_by_s(yamanote, n);

		for (int i = 1; i < n; i++) {
			for (int j = 0; j < i;) {
	
				if (f[j] == 1) { j++; continue; }
				if (yamanote[i].s >= yamanote[j].g) {
					f[j] = 1;
					break;
				}
				j++;
				if (j == i)cnt++;
			}
			
		}
		
		cout << cnt << endl;
		cnt = 1;

	}
	return 0;
}