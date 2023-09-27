#include<iostream>
#include<cstdio>
#include<math.h>
#include<string>
#include<algorithm>
#include<functional>
#include<vector>
#include<set>
#include<map>
#include<queue>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;

int main()
{
	int n;
	while (cin >> n) {
		if (n == 0)return 0;
		P a[105000];

		string s1, s2;
		for (int i = 0; i < n; i++) {
			cin >> s1 >> s2;
			int hour1 = (int)(s1[0] - '0') * 10 + (int)(s1[1] - '0');
			int min1= (int)(s1[3] - '0') * 10 + (int)(s1[4] - '0');
			int sec1 = (int)(s1[6] - '0') * 10 + (int)(s1[7] - '0');
			int hour2 = (int)(s2[0] - '0') * 10 + (int)(s2[1] - '0');
			int min2 = (int)(s2[3] - '0') * 10 + (int)(s2[4] - '0');
			int sec2 = (int)(s2[6] - '0') * 10 + (int)(s2[7] - '0');
			a[i].first = 3600 * hour1 + 60 * min1 + sec1;
			a[i].second = 3600 * hour2 + 60 * min2 + sec2;
		}
		sort(a, a + n);
		/*
		for (int i = 0; i < n; i++) {
			cout << a[i].first <<" "<< a[i].second << endl;
		}
		*/

		priority_queue<int,vector<int>,greater<int> >que;
		que.push(a[0].second);
		int cnt = 1;
		for (int i = 1; i < n; i++) {
			
			if (que.empty()) {
				cnt++;
				que.push(a[i].second);
			}
			else {
				int k = que.top();
				if (a[i].first >= k) {
					que.pop();
					que.push(a[i].second);
					continue;
				}
				else {
					cnt++;
					que.push(a[i].second);
				}
			}
		}
		cout << cnt << endl;

	}

	return 0;
}