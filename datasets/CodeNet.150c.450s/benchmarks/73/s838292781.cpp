#include <bits/stdc++.h>

using namespace std;

struct Mo_3D
{
  vector< int > left, right, index, order;
  vector< bool > v;
  int width;
  int nl, nr, time, ptr;

  Mo_3D(int n) : width((int) pow(n, 2.0 / 3.0)), nl(0), nr(0), ptr(0), time(0), v(n) {}

  void insert(int idx, int l, int r) /* [l, r) */
  {
    left.push_back(l);
    right.push_back(r);
    index.push_back(idx);
  }

  void build()
  {
    order.resize(left.size());
    iota(begin(order), end(order), 0);
    sort(begin(order), end(order), [&](int a, int b)
    {
      if(left[a] / width != left[b] / width) return left[a] < left[b];
      if(right[a] / width != right[b] / width) return right[a] < right[b];
      return bool((index[a] < index[b]) ^ (right[a] / width % 2));
    });
  }

  int process()
  {
    if(ptr == order.size()) return (-1);
    const auto id = order[ptr];
    while(time < index[id]) addquery(time++);
    while(time > index[id]) delquery(--time);
    while(nl > left[id]) distribute(--nl);
    while(nr < right[id]) distribute(nr++);
    while(nl < left[id]) distribute(nl++);
    while(nr > right[id]) distribute(--nr);
    return (index[order[ptr++]]);
  }

  inline void distribute(int idx)
  {
    v[idx].flip();
    if(v[idx]) add(idx);
    else del(idx);
  }

  void add(int idx);

  void del(int idx);

  void addquery(int idx);

  void delquery(int idx);
};


int N, Q, A[100000], B[100000], C[100000];
int D[100000];
int ans[100000], sum;

void Mo_3D::add(int idx)
{
  sum += D[idx];
}

void Mo_3D::del(int idx)
{
  sum -= D[idx];
}

void Mo_3D::addquery(int idx)
{
  if(A[idx] == 1) return;
  if(v[B[idx]]) {
    distribute(B[idx]);
    D[B[idx]] += C[idx];
    distribute(B[idx]);
  } else {
    D[B[idx]] += C[idx];
  }
}

void Mo_3D::delquery(int idx)
{
  if(A[idx] == 1) return;
  if(v[B[idx]]) {
    distribute(B[idx]);
    D[B[idx]] -= C[idx];
    distribute(B[idx]);
  } else {
    D[B[idx]] -= C[idx];
  }
}

int main()
{

  scanf("%d %d", &N, &Q);

  Mo_3D mo(N);
  for(int i = 0; i < Q; i++) {
    scanf("%d %d %d", &A[i], &B[i], &C[i]);
    --B[i];
    if(A[i] == 1) mo.insert(i, B[i], C[i]);
  }

  mo.build();

  int idx;
  while((idx = mo.process()) != -1) {
    ans[idx] = sum;
  }

  for(int i = 0; i < Q; i++) {
    if(A[i] == 1) printf("%d\n", ans[i]);
  }

}