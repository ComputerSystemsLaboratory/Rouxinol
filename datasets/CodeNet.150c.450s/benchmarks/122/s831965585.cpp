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

int tree[20000000];
int N = 0;

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

void insert(int i) {
	if (i == 0) return;
	int parent = (i - 1) / 2;
	if (tree[parent] < tree[i]) {
		int temp = tree[parent];
		tree[parent] = tree[i];
		tree[i] = temp;
		insert(parent);
	}
}

int main(int argc, char const *argv[]) {
	string s;
	do {
		cin >> s;
		if (s == "insert") {
			int value;
			cin >> value;
			tree[N] = value;
			insert(N);
			N++;
		} else if (s == "extract"){
			int value = tree[0];
			tree[0] = tree[N - 1];
			N--;
			maxHeapify(0);
			cout << value << endl;
		}
	} while(s != "end");

	return 0;
}