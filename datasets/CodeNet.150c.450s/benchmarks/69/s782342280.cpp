#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<complex>
#include<set>
#include<map>
#include<list>
#include<vector>
#include<deque>
using namespace std;
typedef long long ll;
typedef vector<int>vec;
typedef vector<vec>mat;
const int INF = 0x3f3f3f3f;
const int Mod = 1e9 + 7;
const double eps = 1e-7;
int main() {
	int a[10];
	int n = 0;
	cin >> n;
	while (n--) {
		int flag = 0;
		memset(a, 0, sizeof(a));
		for (int i = 0; i < 10; i++)
			cin >> a[i];
		for (int cnt = 0; cnt < 1024; cnt++) {//cnt :number of choices
			deque<int> B; deque<int> C;
			for (int i = 0; i < 10; i++) {
				if ((cnt >> i) & 1)B.push_front(a[i]);
				else C.push_front(a[i]);
			}
			reverse(B.begin(), B.end()); reverse(C.begin(), C.end());
			if (is_sorted(B.begin(), B.end()) && is_sorted(C.begin(), C.end())) {
				flag = 1;
				break;
			}
		}
		if (flag)puts("YES");
		else puts("NO");
	}
	//system("pause");
	return 0;
}