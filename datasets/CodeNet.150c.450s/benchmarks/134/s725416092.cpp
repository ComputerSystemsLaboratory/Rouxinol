#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define ll long long
#define ull unsigned long long
#define INF (1 << 30)
#define LLINF (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define eps 1e-9
#define P pair<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }
void Yes() { cout << "Yes\n"; }
void No() { cout << "No\n"; }

template<class T>
class BinaryTree {
public:
	class Node {
	public:
		int parent;
		int left;
		int right;
		T value;

		Node() : parent(-1), left(-1), right(-1) {}
	};

	vector<Node> data;
	int root;
	int _size;

	BinaryTree() {
		root = -1;
		_size = 1;
		data.resize(1);
	}

	Node operator[](int id) {
		return data[id];
	}

	void resize(int size) {
		if (size > _size) {
			while (_size < size) {
				_size *= 2;
			}
			data.resize(_size);
		}
	}

	void addNode(int id, int left, int right, T value) {
		resize(id + 1);

		if (root == -1) {
			root = id;
		}

		data[id].left = left;
		data[id].right = right;
		data[id].value = value;

		resize(left + 1);
		if (left != -1)
			data[left].parent = id;
		resize(right + 1);
		if (right != -1)
			data[right].parent = id;

		if (root == left || root == right) {
			while (data[root].parent != -1) {
				root = data[root].parent;
			}
		}
	}

	int getSibling(int id) {
		if (data[id].parent == -1)
			return -1;

		int parent = data[id].parent;
		if (data[parent].left == id)
			return data[parent].right;
		if (data[parent].right == id)
			return data[parent].left;
	}

	int getDegree(int id) {
		int degree = 0;
		if (data[id].left != -1)
			degree++;
		if (data[id].right != -1)
			degree++;

		return degree;
	}

	int getDepth(int id) {
		return recurDepth(id, 0);
	}

	int recurDepth(int id) {
		int depth = 0;
		while (data[id].parent != -1) {
			id = data[id].parent;
			depth++;
		}
		return depth;
	}

	int getHeight(int id) {
		if (id == -1)
			return -1;

		int	h1 = getHeight(data[id].left);
		int h2 = getHeight(data[id].right);

		return max(h1, h2) + 1;
	}

	string getName(int id) {
		if (data[id].parent == -1)
			return "root";
		else if (data[id].left == -1 && data[id].right == -1)
			return "leaf";

		return "internal node";
	}

	vector<int> getPreOrder() {
		vector<int> dst;
		calcPreOrder(dst, root);
		return dst;
	}

	void calcPreOrder(vector<int>& order, int id) {
		if (id == -1)
			return;
		order.push_back(id);
		calcPreOrder(order, data[id].left);
		calcPreOrder(order, data[id].right);
	}

	vector<int> getInOrder() {
		vector<int> dst;
		calcInOrder(dst, root);
		return dst;
	}

	void calcInOrder(vector<int>& order, int id) {
		if (id == -1)
			return;
		calcInOrder(order, data[id].left);
		order.push_back(id);
		calcInOrder(order, data[id].right);
	}

	vector<int> getPostOrder() {
		vector<int> dst;
		calcPostOrder(dst, root);
		return dst;
	}

	void calcPostOrder(vector<int>& order, int id) {
		if (id == -1)
			return;
		calcPostOrder(order, data[id].left);
		calcPostOrder(order, data[id].right);
		order.push_back(id);
	}
};

template<class T>
void printVector(vector<T> v, string between, int mode) {
	if (mode == 0) {
		for (int i = 0, k = v.size(); i < k; ++i) {
			cout << v[i];
			if (i < k - 1)
				cout << between;
		}
		cout << endl;
	}
	else if (mode == 1) {
		for (int i = 0, k = v.size(); i < k; ++i) {
			cout << between << v[i];
		}
		cout << endl;
	}
}

int main() {
	int n, id, l, r;
	BinaryTree<int> tree;
	
	cin >> n;
	while (n--) {
		cin >> id >> l >> r;
		tree.addNode(id, l, r, 0);
	}

	cout << "Preorder" << endl;
	printVector(tree.getPreOrder(), " ", 1);
	cout << "Inorder" << endl;
	printVector(tree.getInOrder(), " ", 1);
	cout << "Postorder" << endl;
	printVector(tree.getPostOrder(), " ", 1);

	return 0;
}