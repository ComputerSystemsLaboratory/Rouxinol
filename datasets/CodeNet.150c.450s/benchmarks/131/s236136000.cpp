#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX = 1000000;

int a0, L;
int data[MAX], x[6];

void solve() {
	for (int i=0; i<MAX; i++) data[i] =-1;
	int i=0, a=a0;
	while (data[a] == -1) {
		data[a] = i;
		for (int j=0; j<L; j++) {
			x[j] = a%10;
			a/=10;
		}
	sort(x, x+L);
	int max=0, min=0, c=1;
	for (int j=0; j<L; j++) {
	       max += x[j] *c;
	       min += x[L-j-1] *c;
	       c*=10;
	  }
	  a = max-min;
	  i++;
     }
     cout << data[a] << " " << a << " " << (i - data[a]) << endl;
}

int main() {
	while (cin >> a0 >> L, L) solve();
}