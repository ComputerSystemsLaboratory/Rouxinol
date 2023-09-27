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

#define INF 100000000
#define EPS 1e-9

#define MAX_N 100
#define MAX_M 100

int n, m;
int s1[MAX_N];
int s2[MAX_M];

vector<int> ans_list[2];

int main(){
	
	while (true){
	
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;

		int sum1 = 0, sum2 = 0;

		for (int i = 0; i < n; i++){
			cin >> s1[i];
			sum1 += s1[i];
		}
	
		for (int i = 0; i < m; i++){
			cin >> s2[i];
			sum2 += s2[i];
		}

		sort(s1, s1 + n);
		sort(s2, s2 + m);

		bool flag = false;

		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				sum1 -= s1[i];
				sum2 -= s2[j];
				sum1 += s2[j];
				sum2 += s1[i];
				if (sum1 == sum2){

					ans_list[0].push_back(s1[i]);
					ans_list[1].push_back(s2[j]);
					i = n;
					j = m;
					flag = true;
					break;
				}
				sum1 += s1[i];
				sum2 += s2[j];
				sum1 -= s2[j];
				sum2 -= s1[i];
			}
		}

		if (!flag){
			ans_list[0].push_back(-1);
			ans_list[1].push_back(-1);
		}

	}

	for (int i = 0; i < ans_list[0].size(); i++){
		if (ans_list[0][i] != -1)
			cout << ans_list[0][i] << " " << ans_list[1][i] << endl;
		else
			cout << -1 << endl;
	}

	return 0;

}