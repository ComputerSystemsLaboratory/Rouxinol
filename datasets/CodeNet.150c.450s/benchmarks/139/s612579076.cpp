#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <math.h> 
#include <iomanip>
#include <string.h>
#include<sstream>
#include <vector>
#include<queue>
#include <set>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define PI 3.14159265358979323846264338327950L

#define INF 0x3f3f3f3f
//const int N = 2e5 + 5;

int N, M;


 
bool visited[100005];
queue<int> q;
vector<int> v[100005];
int32_t  main() {

	IOS;

	

	cin >> N >> M;
	 
	bool flag = false;
	for (int i = 0; i < M; i++) {

		int r1, r2;

		cin >> r1 >> r2;

		v[r1].push_back(r2);

		v[r2].push_back(r1);

		if (r1 == 1 || r2 == 1)
			flag = true;

	}

	if (!flag) {
		cout << "No" << endl;
	}
	else {

		vector<int> ans(N+1);

		q.push(1);


		while (q.size()) {

			int tmp = q.front();
			q.pop();

			if (!visited[tmp]) {

				visited[tmp] = true;

				for (int i : v[tmp]) {

					q.push(i);
					if (ans[i] == 0) {
						ans[i] = tmp;
					}

				}

			}

		}
		cout << "Yes" << endl;

		for (int i = 2; i <= N; i++) {

			cout << ans[i] << endl;
		}

	}

 

}
