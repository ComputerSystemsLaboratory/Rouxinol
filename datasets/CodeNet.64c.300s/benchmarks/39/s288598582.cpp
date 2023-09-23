#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999

using namespace std;

typedef long long ll;

int main()
{
	int n;
	
	while (cin >> n) {
		int count = 0;
		for (int i = 0; i <= 9; i++) {
			for (int j = 0; j <= 9; j++) {
				for (int k = 0; k <= 9; k++) {
					if (n - 9 <= i + k + j&&i + k + j <= n)count++;
				}
			}
		}
		cout << count << endl;
	}

	return 0;
}