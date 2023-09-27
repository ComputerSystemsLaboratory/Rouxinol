#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <queue>

#pragma warning( disable: 4996 )

using namespace std;

typedef long long ll;

#define INF 1000000000
#define EPS 1e-10

#define MAX_N 1501
#define MAX_M 1501

int N, M;

int h[MAX_N], w[MAX_M];
int sum_h[MAX_N];
int sum_w[MAX_M];

vector<int> ans_list;

int main(){


	while (true){

		cin >> N >> M;
		if (N == 0 && M == 0)
			break;

		for (int i = 0; i < N; i++){
			cin >> h[i];
			sum_h[i + 1] = sum_h[i] + h[i];
		}

		for (int i = 0; i < M; i++){
			cin >> w[i];
			sum_w[i + 1] = sum_w[i] + w[i];
		}

		vector<int> list_h, list_w;

		for (int emp = 0; emp < N; emp++){
			for (int s = 0, e = N - emp; e <= N; s++, e++){
				list_h.push_back(sum_h[e] - sum_h[s]);
			}
		}

		for (int emp = 0; emp < M; emp++){
			for (int s = 0, e = M - emp; e <= M; s++, e++){
				list_w.push_back(sum_w[e] - sum_w[s]);
			}
		}

		sort(list_h.begin(), list_h.end());

		int ans = 0;

		for (int i = 0; i < list_w.size(); i++){
			ans += upper_bound(list_h.begin(), list_h.end(), list_w[i]) - lower_bound(list_h.begin(), list_h.end(), list_w[i]);
		}

		ans_list.push_back(ans);

	}

	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}

	return 0;

}