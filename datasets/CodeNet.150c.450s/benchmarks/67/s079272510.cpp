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


int n;

vector<int> ans_list;

int main(){

	while (true){
		cin >> n;
		if (n == 0)
			break;
		int count = 0;
		int sum = 0;
		for (int i = 1; i < n; i++){
			sum = i;
			for (int j = i + 1;; j++){
				sum += j;
				if (sum == n){
					count++;
					break;
				}
				else if (sum > n)
					break;
			}
		}

		ans_list.push_back(count);

	}

	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}


	return 0;

}