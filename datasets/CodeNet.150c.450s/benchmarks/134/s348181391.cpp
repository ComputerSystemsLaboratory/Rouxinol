#include <algorithm>
#include <cstdio>
#include <vector>

static const size_t n_max = 25;
static bool root[n_max];
static std::pair<size_t, size_t> children[n_max];

enum order {
  pre,
  in,
  post
};

void rec(size_t i, order o) {
  if (o == pre)
    printf(" %zu", i);
  if (children[i].first != size_t(-1))
    rec(children[i].first, o);
  if (o == in)
    printf(" %zu", i);
  if (children[i].second != size_t(-1))
    rec(children[i].second, o);
  if (o == post)
    printf(" %zu", i);
}

int main() {
  size_t n;
  scanf("%zu\n", &n);
  std::fill(root, root + n, true);
  for (size_t i = 0; i < n; i++) {
    size_t j;
    int l, r;
    scanf("%zu%d%d", &j, &l, &r);
    children[j].first = size_t(l);
    children[j].second = size_t(r);
    if (l >= 0)
      root[l] = false;
    if (r >= 0)
      root[r] = false;
  }
  auto r = std::find(root, root + n, true) - root;
  puts("Preorder");
  rec(r, pre);
  puts("");
  puts("Inorder");
  rec(r, in);
  puts("");
  puts("Postorder");
  rec(r, post);
  puts("");
  return 0;
}