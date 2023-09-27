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
#define MAX_A 10000
#define MAX_B 10000
#define MAX_C 10000

int N, A, B, C, X;
int Y[MAX_N];

vector<int> ans_list;

int main(){

	while (true){

		cin >> N >> A >> B >> C >> X;
		if (N == 0)
			break;

		int ans = 0;

		for (int i = 0; i < N; i++){
			cin >> Y[i];
		}

		for (int i = 0; i < N; i++){
			if (i != 0){
				X = (A * X + B) % C;
				ans++;
			}
			while (Y[i] != X){
				ans++;
				X = (A * X + B) % C;
				if (ans > 10000)
					break;
			}
			if (ans > 10000)
				break;
		}

		if (ans <= 10000)
			ans_list.push_back(ans);
		else
			ans_list.push_back(-1);

	}

	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}

	return 0;

}