#include "bits/stdc++.h"
#include <unordered_set>

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define REP3(i, x, n) for(decltype(x) i = (x); i <= (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1; i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define INF 1000000000
#define PI 3.14159265358979323846

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

// N, E, S, W
const int dx[4] = { -1, 0,  1,  0 };
const int dy[4] = { 0, 1,  0, -1 };

typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vll;

//==============================================

#define NIL -2000000050

struct node {
	int key;
	int left = NIL;
	int right = NIL;
};

node T[500050];

void insert(int z) {
	int y = NIL;
	int x = 0;

	while (x != NIL) {
		y = x;
		if (T[z].key < T[x].key) {
			x = T[x].left;
		} else {
			x = T[x].right;
		}
	}

	if (z == 0) return;

	if (T[z].key < T[y].key ) {
		T[y].left = z;
	} else {
		T[y].right = z;
	}
}

void inorder(int v) {
	if (v == NIL) return;
	inorder(T[v].left);
	cout << " " << T[v].key;
	inorder(T[v].right);
}

void preorder(int v) {
	if (v == NIL) return;
	cout << " " << T[v].key;
	preorder(T[v].left);
	preorder(T[v].right);
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	string s;
	int v;

	REP(i, n) {
		cin >> s;
		if (s == "insert") {
			cin >> v;
			T[i].key = v;
			insert(i);
		} else {
			inorder(0);
			cout << "\n";
			preorder(0);
			cout << "\n";
		}
	}
	return 0;
}