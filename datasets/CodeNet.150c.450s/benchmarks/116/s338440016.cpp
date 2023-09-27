//aoj0516 in binary indexed tree

#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100010];
int ans = 0;

struct bittree
{
  int tree[100010];

  void reset()
  {
    memset(tree, 0, sizeof tree);
  }
  
  void add(int where, int val)
  {
    for(int i = where; i <= n; i += i & -i){
      tree[i] += val;
    }
  }

  int sum(int where)
  {
    int ret = 0;
    
    for(int i = where; i >= 1; i -= i & -i){
      ret += tree[i];
    }

    return ret;
  }
} tr;

int main()
{
  while(cin >> n >> k, n && k){
    for(int i = 1; i <= n; i++){
      cin >> a[i];
    }

    tr.reset();
    
    for(int i = 1; i <= n; i++){
      tr.add(i, a[i]);
    }

    for(int i = 1; i <= n - k + 1; i++){
      ans = max(ans, tr.sum(i + k - 1) - tr.sum(i - 1));
    }

    cout << ans << endl;
  }
  return 0;
}