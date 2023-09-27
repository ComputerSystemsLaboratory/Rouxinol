#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
#include <random>
#include <cstdlib>
#define INT_MAX 2147483647
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i < (int)n; i++)
#define Loopr(i, n) for(int i= (int)n - 1; i >= 0; i--)
using namespace std;
typedef long long int ll;

struct node {
	int parent, left, right;
};

int n, r, l;
vector<node> nodes(25, { -1,-1,-1 });

void print_pre(int a) {
	if (a != -1) {
		cout << " " << a;
		print_pre(nodes[a].left);
		print_pre(nodes[a].right);
	}
}

void print_in(int a) {
	if (a != -1) {
		print_in(nodes[a].left);
		cout << " " << a;
		print_in(nodes[a].right);
	}
}

void print_post(int a) {
	if (a != -1) {
		print_post(nodes[a].left);
		print_post(nodes[a].right);
		cout << " " << a;
	}
}

int main() {
	cin >> n;
	Loop(i, n) {
		int id;
		cin >> id;
		int l, r;
		cin >> l >> r;
		nodes[id].left = l;
		nodes[id].right = r;
		if (l != -1)nodes[l].parent = id;
		if (r != -1)nodes[r].parent = id;
	}
	Loop(i, n) {
		if (nodes[i].parent == -1) {
			r = i;
			break;
		}
	}
	cout << "Preorder" << endl;
	print_pre(r);
	cout << endl;
	cout << "Inorder" << endl;
	print_in(r);
	cout << endl;
	cout << "Postorder" << endl;
	print_post(r);
	cout << endl;
	return 0;
}