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

#define MAX_N 256
#define MAX_M 256

int N, M;
map<string, bool> m;

vector<string> ans_list;

int main(){

	cin >> N;
	for (int i = 0; i < N; i++){
		string str;
		cin >> str;
		m[str] = true;
	}
	cin >> M;
	string ans[3];
	ans[0] = "Closed by ";
	ans[1] = "Opened by ";
	ans[2] = "Unknown ";
	int count = 0;

	for (int i = 0; i < M; i++){
		string tmp;
		cin >> tmp;
		if (m[tmp]){
			count++;
			ans_list.push_back(ans[count % 2] + tmp);
		}
		else{
			ans_list.push_back(ans[2] + tmp);
		}
	}


	for (int i = 0; i < ans_list.size(); i++){
		cout << ans_list[i] << endl;
	}

	return 0;

}