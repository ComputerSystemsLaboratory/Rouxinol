#include <bits/stdc++.h>

class BIT {
private:
	int sequence_size_;
	std::vector<int> container_;
public:
	BIT(int);
	void add(int place, int num);
	int get_sum(int left, int right);
};

BIT::BIT(int n)
	:sequence_size_(n)
{
	// 各ノードは1-indexedの数列の要素に紐づけられる
	container_.resize(n + 1);
}

void BIT::add(int place, int num)
{
	while (place <= sequence_size_)
	{
		container_[place] += num;
		place += place & -place;
	}
}

// 1-indexedで(left, right]の和
int BIT::get_sum(int left, int right)
{
	int sum{};
	while (right)
	{
		sum += container_[right];
		right -= right & -right;
	}
	while (left)
	{
		sum -= container_[left];
		left -= left & -left;
	}
	return sum;
}

int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	BIT rsq(n);
	for (int i{}; i < q; i++)
	{
		int com, x, y;
		scanf("%d%d%d", &com, &x, &y);
		switch(com)
		{
		case 0:
			rsq.add(x, y);
			break;
		case 1:
			printf("%d\n", rsq.get_sum(x - 1, y));
			break;
		}
	}
	return 0;
}
