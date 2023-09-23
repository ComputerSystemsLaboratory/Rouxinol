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
#define INF 1000000000
#define EPS 1.0e-10

using namespace std;

typedef long long ll;

int a[5];
int b[5];

int main()
{
	while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
		for (int i = 0; i < 4; i++) {
			cin >> b[i];
		}
		int hit = 0;
		int blow = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (a[i] == b[j]) {
					if (i == j)hit++;
					else blow++;
				}
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}