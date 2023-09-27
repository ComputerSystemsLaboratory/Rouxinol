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

#define MAX_N 50
#define MAX_R 50

int n, r;
int p[MAX_R];
int c[MAX_R];
vector<int> ans_list;

int main(){
	
	while (true){
	
		cin >> n >> r;

		if (n == 0 && r == 0)
			break;

		for (int i = 0; i < r; i++){
			cin >> p[i] >> c[i];
		}

		int ans[MAX_N];
		for (int i = 0; i < n; i++){
			ans[i] = n - i;
		}
		int tmp[MAX_N];

		for (int i = 0; i < r; i++){
			
			for (int j = 0; j < c[i]; j++){
				tmp[j] = ans[p[i] - 1 + j];
			}

			for (int j = p[i]-2; j >= 0; j--){
				ans[j + c[i]] = ans[j];
			}

			for (int j = 0; j < c[i]; j++){
				ans[j] = tmp[j];
			}

		}

		ans_list.push_back(ans[0]);
	
	}

	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}


	return 0;

}