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
	int tree[250];
	for (int i = 0; i < 250; ++i) {
		tree[i] = 2000000001;
	}
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> tree[i];
	}

	for (int i = 0; i < N; ++i) {
		cout << "node " << i + 1 << ": key = " << tree[i] << ",";
		if (i != 0) {
			cout << " parent key = " << tree[(i - 1) / 2] << ",";
		}
		if (i * 2 + 1 < 250 && tree[i * 2 + 1] != 2000000001) {
			cout << " left key = " << tree[i * 2 + 1] << ",";
		} 
		if (i * 2 + 2 < 250 && tree[i * 2 + 2] != 2000000001) {
			cout << " right key = " << tree[i * 2 + 2] << ",";
		} 
		cout << " " << endl;
	}

	return 0;
}