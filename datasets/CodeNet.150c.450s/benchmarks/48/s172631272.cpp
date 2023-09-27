#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<string>
#include<string.h>
#include<set>
#include<functional>
using namespace std;

#define INF 1<<21
#define MOD 1000000007

int main() {
  int e;
  while (1) {
	cin >> e;
	if (e == 0)return 0;
	int x, y, z;
	int m=INF;
	for (z = 0; z*z*z <= e; z++) {
	  for (y = 0; y*y <= e - z*z*z; y++) {
		x = e - z*z*z - y*y;
		if (x + y + z < m)m = x + y + z;
	  }
	}
	cout << m << endl;
  }
}