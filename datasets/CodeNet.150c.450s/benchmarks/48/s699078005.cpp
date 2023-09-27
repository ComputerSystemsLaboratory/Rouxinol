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

#define MAX_N 1000000

vector<int> ans_list;

int main(){

	while (true){
		
		int e;
		cin >> e;
		if (e == 0)
			break;

		int min_ans = MAX_N;

		for (int i = 0; i <= 100; i++){
			if (i*i*i > e)
				break;
			for (int j = 0; j <= 1000; j++){
				if (i*i*i + j*j > e)
					break;

				if (i*i*i + j*j <= e)
					min_ans = min(min_ans, i + j + e - i*i*i - j*j);
			}
		}

		ans_list.push_back(min_ans);

	}

	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}

	return 0;

}