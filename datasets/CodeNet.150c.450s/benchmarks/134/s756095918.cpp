#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <stack>
#include <queue>

#define INT_MAX 2147483647
#define INT_MIN -2147483647

#define NUM 10000
#define INVALID_IDX -1
using namespace std;

struct BTree
{
private:
	struct BTreeNode{
		int p, l, r;
	};
	BTreeNode data[25];
	int len;
	int D[25], H[25];

	void getDepth(int idx, int depth)
	{
		D[idx] = depth;
		if (data[idx].l != INVALID_IDX) getDepth(data[idx].l, depth + 1);
		if (data[idx].r != INVALID_IDX) getDepth(data[idx].r, depth + 1);
	}

	int getHeight(int idx)
	{
		if (idx == INVALID_IDX) return -1;

		int hl = getHeight(data[idx].l);
		int hr = getHeight(data[idx].r);

		H[idx] = max(hl, hr) + 1;
		return H[idx];
	}

	int getSibling(int idx)
	{
		int pIdx = data[idx].p;

		if (pIdx == INVALID_IDX) return INVALID_IDX;
		if (idx == data[pIdx].l && data[pIdx].r != INVALID_IDX)
			return data[pIdx].r;
		if (idx == data[pIdx].r && data[pIdx].l != INVALID_IDX)
			return data[pIdx].l;
		return INVALID_IDX;
	}

	void markHead()
	{
		for (int i = 0; i < len; ++i)
		{
			if (data[i].p == INVALID_IDX)
			{
				rootIdx = i;
				break;
			}
		}
	}

	void printNode(int idx)
	{
		cout << "node " << idx << ": ";
		cout << "parent = " << data[idx].p << ", ";
		cout << "sibling = " << getSibling(idx) << ", ";
		
		int degree = 0;
		if (data[idx].l != INVALID_IDX) degree++;
		if (data[idx].r != INVALID_IDX) degree++;
		cout << "degree = " << degree << ", ";

		cout << "depth = " << D[idx] << ", ";
		cout << "height = " << H[idx] << ", ";

		string type = "";
		if (data[idx].p == INVALID_IDX) type = "root";
		else if (data[idx].l != INVALID_IDX || data[idx].r != INVALID_IDX) type = "internal node";
		else type = "leaf";
		cout << type << endl;
	}

public:
	int rootIdx;

	BTree()
	{
		for (int i = 0; i < 25; ++i)
		{
			data[i].l = data[i].r = data[i].p = INVALID_IDX;
		}
	}

	void FiTraverse(int idx)
	{
		if (idx == INVALID_IDX) return;

		cout << " " << idx;
		FiTraverse(data[idx].l);
		FiTraverse(data[idx].r);
	}

	void InTraverse(int idx)
	{
		if (idx == INVALID_IDX) return;

		InTraverse(data[idx].l);
		cout << " " << idx;
		InTraverse(data[idx].r);
	}

	void PoTraverse(int idx)
	{
		if (idx == INVALID_IDX) return;

		PoTraverse(data[idx].l);
		PoTraverse(data[idx].r);
		cout << " " << idx;
	}

	void construct()
	{
		int idx, lc, rc;
		cin >> len;
		for (int i = 0; i < len; ++i)
		{
			cin >> idx >> lc >> rc;
			data[idx].l = lc;
			data[idx].r = rc;

			data[lc].p = idx;
			data[rc].p = idx;
		}
		markHead();
		getDepth(rootIdx, 0);
		getHeight(rootIdx);
	}

	void print()
	{
		for (int i = 0; i < len; ++i)
			printNode(i);
	}
};


int main()
{
	BTree t;
	t.construct();
	//t.print();
	cout << "Preorder" << endl;
	t.FiTraverse(t.rootIdx);
	cout << endl;

	cout << "Inorder" << endl;
	t.InTraverse(t.rootIdx);
	cout << endl;

	cout << "Postorder" << endl;
	t.PoTraverse(t.rootIdx);
	cout << endl;

}