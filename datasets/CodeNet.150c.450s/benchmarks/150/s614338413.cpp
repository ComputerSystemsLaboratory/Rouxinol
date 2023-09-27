#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
 
using namespace std;
 
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
 
const int INF=1<<29;
const double EPS=1e-9;
 
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int main(int argc, char const *argv[]) {
	int N;
	cin >> N;

	std::vector<int> array(10001, 0);
	for (int i = 0; i < N; ++i) {
		int temp;
		cin >> temp;
		array[temp]++;
	}

	std::vector<int> ans;
	for (int i = 0; i <= 10000; ++i) {
		while(array[i]) {
			ans.push_back(i);
			array[i]--;
		}
	}

	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i];
		if (i != ans.size() - 1) {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}