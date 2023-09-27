#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct Item {
	int v, w;
};

vector<Item> get_items(const unsigned int N) {
	vector<Item> items(N+1);
	items[0].v = 0;
	items[0].w = 0;
	for (int i = 1; i < items.size(); ++i) {
		cin >> items[i].v >> items[i].w;
	}
	return items;
}

int most_valuable(vector<Item> items, const unsigned int W)
{
	vector<vector<int> > dp_table(items.size(), vector<int>(W+1, 0));

	for (int i = 1; i < dp_table.size(); ++i) {
		for (int j = 1; j <= W; ++j) {
			if (j < items[i].w) {
				dp_table[i][j] = dp_table[i - 1][j];
			} else {
				dp_table[i][j] = max(dp_table[i - 1][j], dp_table[i - 1][j - items[i].w] + items[i].v);
			}
		}
	}


	return dp_table[dp_table.size()-1][W];
}

int main()
{
	unsigned int N, W;
	cin >> N >> W;

	vector<Item> items = get_items(N);
	int max_value = most_valuable(items, W);

	cout << max_value << endl;

	return 0;
}