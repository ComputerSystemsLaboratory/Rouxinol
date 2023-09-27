#include<bits/stdc++.h>

using namespace std;

const int N = 3e5;  // limit for array size
int n;  // array size
int t[2 * N];

void build() {  // build the tree
  for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

void modify(int p, int value) {  // set value at position p
  for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
}

int query(int l, int r) {  // sum on interval [l, r)
  int res = 0;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res += t[l++];
    if (r&1) res += t[--r];
  }
  return res;
}

int main()
{
  int m;
  scanf("%d", &n);
  cin>>m;
  // for (int i = 0; i < n; ++i) //scanf("%d", t + n + i);
       // t[n+i]=0;
  build();
  for(int i=1;i<=m;i++)
    {
      int op,x,y;
      cin>>op>>x>>y;
      if(op==0)
	modify(x-1,y+t[n+x-1]);
      else
	cout<<query(x-1,y)<<endl;
    }
  // modify(0, 1);
  //printf("%d\n", query(3, 11));
  return 0;
}