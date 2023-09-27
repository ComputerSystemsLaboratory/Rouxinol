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
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

int main()
{
	int n, m;
	int k = 0;
	
	while (1) {
		cin >> n;
		if (n == 0)break;
		char a, b;
		map<char, char> mp;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			mp[a] = b;
		}

		cin >> m;

		for (int i = 0; i < m; i++) {
			cin >> a;
			auto itr = mp.find(a);
			if (itr != mp.end()) {
				cout << mp[a];
			}
			else cout << a;
		}
		cout << endl;
	}
	
	return 0;
}