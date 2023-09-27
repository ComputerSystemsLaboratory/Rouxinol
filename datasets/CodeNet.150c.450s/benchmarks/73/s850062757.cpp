#include <bits/stdc++.h>

/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// ここからコピペ /////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

///////////////////
// RangeSumQuery //
///////////////////

class RangeSumQuery {
private:
	std::vector<long long> container_;
	long long getHelper(const int index) const
	{
		if (index < 0) return 0;
		if ((int)(container_.size()) <= index) return container_.back();
		long long sum{};
		for (int add_place{index}; add_place > 0; add_place -= add_place & -add_place)
			sum += container_[add_place];
		return sum;
	}

public:
	RangeSumQuery(const int array_size)
		: container_(array_size + 1) {}
	// indexは0-indexed
	void update(const int index, const int added)
	{
		for (int update_place{index + 1}; update_place < (int)(container_.size()); update_place += update_place & -update_place)
			container_[update_place] += added;
	}
	// left,rightは0-indexed、[left, right)の半開区間
	long long get(const int left, const int right) const
	{
		return -getHelper(left) + getHelper(right);
	}
};

/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// ここまでコピペ /////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B&lang=jp
int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	RangeSumQuery rsq(n);
	for (int i{}; i < q; i++)
	{
		int com, x, y;
		scanf("%d%d%d", &com, &x, &y);
		if (!com) rsq.update(x - 1, y);
		else printf("%lld\n", rsq.get(x - 1, y));
	}

	return 0;
}
