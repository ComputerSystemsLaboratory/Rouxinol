#include <vector>
#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// ここからコピペ /////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

//////////////////
// Union-Find木 //
//////////////////

class UnionFind {
private:
	std::vector<int> parent_, size_;
public:
	UnionFind(const int size)
		:parent_(size), size_(size, 1)
	{
		for (int i{}; i < size; i++) parent_[i] = i;
	}
	int calcRoot(const int index)
	{
		if (parent_[index] == index) return index;
		const int p{calcRoot(parent_[index])};
		parent_[index] = p;
		return p;
	}
	bool areConnected(const int index1, const int index2)
	{
		return calcRoot(index1) == calcRoot(index2);
	}
	void unite(const int index1, const int index2)
	{
		const int root1{calcRoot(index1)}, root2{calcRoot(index2)};
		if (root1 == root2) return;
		if (size_[root1] <= size_[root2])
		{
			size_[root2] += size_[root1];
			parent_[root1] = root2;
		}
		else
		{
			size_[root1] += size_[root2];
			parent_[root2] = root1;
		}
		return;
	}
	int calcSize(const int index)
	{
		return size_[calcRoot(index)];
	}
};

/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// ここまでコピペ /////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A&lang=jp
int main()
{
	int n, q;
	scanf("%d%d", &n, &q);

	UnionFind uf(n);
	for (int q_i{}; q_i < q; q_i++)
	{
		int com, x, y;
		scanf("%d%d%d", &com, &x, &y);
		if (com)
		{
			if (uf.areConnected(x, y))
				puts("1");
			else
				puts("0");
		}
		else
		{
			uf.unite(x, y);
		}
	}
	return 0;
}
