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

#define MAX_N 100
#define MAX_M 100
#define MAX_P 100

int N, M, P;
int X[MAX_N];

vector<int> ans_list;

int main(){

	while (true){
		cin >> N >> M >> P;
		if (N == 0 && M == 0 && P == 0)
			break;

		int sum = 0;

		for (int i = 0; i < N; i++){
			cin >> X[i];
			sum += X[i];
		}

		double money = 100 * sum;

		money = money * (100 - P) / 100;

		if (X[M - 1] != 0)
			ans_list.push_back(money / X[M - 1]);
		else
			ans_list.push_back(0);

	}

	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}

	return 0;

}