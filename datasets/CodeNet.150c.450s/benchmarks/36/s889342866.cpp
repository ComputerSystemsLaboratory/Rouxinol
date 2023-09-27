#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 1000000001
#define EPS 1.0e-6

using namespace std;

typedef long long ll;

int main()
{
	int n;
	while (cin >> n) {
		int s = 0;
		for (int i = 1; i < 600 / n; i++) {
			s += (i*n)*(i*n)*n;
		}
		cout << s << endl;
	}

	return 0;
}