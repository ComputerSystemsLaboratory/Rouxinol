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

int n;
vector<int> ans_list;

int main(){
	
	while (true){
	
		cin >> n;
		if (n == 0)
			break;

		vector<int> score;

		for (int i = 0; i < n; i++){
			int s;
			cin >> s;
			score.push_back(s);
		}
	
		sort(score.begin(), score.end());

		int ans = 0;

		for (int i = 1; i < score.size() - 1; i++){
			ans += score[i];
		}

		ans_list.push_back(ans / (score.size() - 2));
	
	}

	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}

	return 0;

}