#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#include <numeric>
#include <list>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <memory.h>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <map>
#define _USE_MATH_DEFINES
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef pair<int, P> PP;
typedef vector<int> vec;
typedef vector<vec> mat;
const int INF = 1 << 30;
const double EPS = 1e-9;

int nums[10000];

int main(){
	int n, m, p;
	while(cin >> n >> m >> p && (n || m || p)){
		m--;
		int sum = 0;
		for(int i = 0; i < n; i++){
			cin >> nums[i];
			sum += 100 * nums[i];
		}
		if(nums[m] == 0) cout << 0 << endl;
		else cout << (int)((double)sum / (double)100 * (100 - p) / nums[m]) << endl;
	}
	return 0;
}