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

void swap(int &a, int &b) {
	int temp = b;
	b = a;
	a = temp;
}

int partition(std::vector<int> &A, int p, int r) {
	int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; ++j) {
		if (A[j] <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

int main(int argc, char const *argv[]) {
	int N;
	cin >> N;

	std::vector<int> array(N, 0);
	for (int i = 0; i < N; ++i) {
		int temp;
		cin >> temp;
		array[i] = temp;
	}

	int c = partition(array, 0, N - 1);
	for (int i = 0; i < N; ++i) {
		if (c != i) cout << array[i]; else {
			cout << "[" << array[i] << "]";
		}
		if (i != N - 1) {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}