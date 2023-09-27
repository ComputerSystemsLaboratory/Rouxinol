#include <iostream>
#include <iomanip>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <utility>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef uint64_t u64;
typedef int64_t s64;
typedef uint32_t u32;
typedef int32_t s32;
typedef vector<s32> vs32;
typedef vector<u32> vu32;
typedef vector<s64> vs64;
typedef vector<u64> vu64;

const double PI=3.14159265358979323846;

#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

#define rep(i, N) for(int i = 0; i < N; ++i)

#define CEIL(x, y) (((x) + (y) - 1) / (y))
#define MOD 1000000007ULL

u64 ans;
void mergeSort(vs32&, int, int);
void merge(vs32&, int, int, int);

void mergeSort(vs32& A, int l, int r)
{
  if (l + 1 < r)
  {
    int m = (l + r) / 2;
    mergeSort(A, l, m);
    mergeSort(A, m, r);
    merge(A, l, m, r);
  }
}

void merge(vs32& A, int l, int m, int r)
{
  int n1 = m - l;
  int n2 = r - m;
  vs32 L(n1 + 1), R(n2 + 1);
  rep (i, n1) L[i] = A[l + i];
  rep (i, n2) R[i] = A[m + i];
  L[n1] = 1e9 + 1; R[n2] = 1e9 + 1;

  int i = 0, j = 0;
  for (int k = l; k < r; ++k)
  {
    if (L[i] <= R[j])
    {
      A[k] = L[i++];
    }
    else
    {
      ans += n1 - i;
      A[k] = R[j++];
    }
  }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vs32 A(n);
    vs32 B(n + 1);
    rep (i, n)
    {
      cin >> A[i];
    }

    mergeSort(A, 0, n);

    cout << ans << "\n";
    return 0;
}

