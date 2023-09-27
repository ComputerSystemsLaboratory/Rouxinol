#include <cstdint>
#include <vector>

using namespace std;

static vector<uint32_t> trees;
static vector<uint32_t> ranks;

void union_find_tree_init(size_t len)
{
  trees.resize(len, 0);
  for (uint32_t i = 0; i < trees.size(); i++) {
    trees[i] = i;
  }
  ranks.resize(len, 0);
}

static uint32_t find_set(uint32_t x)
{
  uint32_t index = x;

  while (trees[index] != index) {
    index = trees[index];
  }

  return index;
}

void union_find_tree_unite(uint32_t x, uint32_t y)
{
  uint32_t set_x = find_set(x);
  uint32_t set_y = find_set(y);

  if (ranks[set_x] < ranks[set_y]) {
    trees[set_x] = set_y;
  } else {
    trees[set_y] = set_x;
  }
}

bool union_find_tree_same(uint32_t x, uint32_t y)
{
  return find_set(x) == find_set(y);
}

#include <iostream>

int32_t main()
{
  uint32_t n, q;
  cin >> n >> q;

  union_find_tree_init(n);

  for (uint32_t i = 0; i < q; i++) {
    uint32_t com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      union_find_tree_unite(x, y);
    } else {
      if (union_find_tree_same(x, y)) {
        cout << "1" << endl;
      } else {
        cout << "0" << endl;
      }
    }
  }

  return 0;
}