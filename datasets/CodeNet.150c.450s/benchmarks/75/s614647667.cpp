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

int tree[500000];
int N;

void maxHeapify(int i) {
	int l = i * 2 + 1;
	int r = i * 2 + 2;
	int largest = i;
	if (l < N && tree[l] > tree[largest]) largest = l;
	if (r < N && tree[r] > tree[largest]) largest = r;

	if (largest != i) {
		int temp = tree[i];
		tree[i] = tree[largest];
		tree[largest] = temp;
		maxHeapify(largest);
	}
}

void buildMaxHeap() {
	for (int i = N / 2 - 1; i >= 0; i--) {
		maxHeapify(i);
	}
}

int main(int argc, char const *argv[]) {
	for (int i = 0; i < 250; ++i) {
		tree[i] = 2000000001;
	}
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> tree[i];
	}
	buildMaxHeap();
	for (int i = 0; i < N; ++i) {
		cout << " " << tree[i];
	}
	cout << endl;
	

	return 0;
}