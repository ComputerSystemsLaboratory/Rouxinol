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

	if (z == 0) return;

	while (x != NIL) {
		y = x;
		if (T[z].key < T[x].key) {
			x = T[x].left;
		} else {
			x = T[x].right;
		}
	}

	if (T[z].key < T[y].key) {
		T[y].left = z;
	} else {
		T[y].right = z;
	}
}

int find(int x, int k) {
	while (x != NIL && k != T[x].key) {
		if (k < T[x].key) {
			x = T[x].left;
		} else {
			x = T[x].right;
		}
	}

	return x;
}

void inorder(int x) {
	if (x == NIL) return;
	inorder(T[x].left);
	cout << " " << T[x].key;
	inorder(T[x].right);
}

void preorder(int x) {
	if (x == NIL) return;
	cout << " " << T[x].key;
	preorder(T[x].left);
	preorder(T[x].right);
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
		} else if (s == "find"){
			cin >> v;
			if (find(0, v) != NIL) {
				cout << "yes" << "\n";
			} else {
				cout << "no" << "\n";
			}
		} else {
			inorder(0);
			cout << "\n";
			preorder(0);
			cout << "\n";
		}
	}
	return 0;
}