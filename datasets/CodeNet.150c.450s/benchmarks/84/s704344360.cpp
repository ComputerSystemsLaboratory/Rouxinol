#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) (c).begin(), (c).end()
#define tr(i,c) for(auto i=(c).begin();i!=(c).end();i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())


typedef unsigned long long ull;

ull inversion_count;

void merge(vi& A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  vi L(n1+1), R(n2+1);
  for (int i = 0; i < n1; i++) {
    L[i] = A[left+i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = A[mid+i];
  }
  L[n1] = R[n2] = INF;
  for (int i = 0, j = 0, k = left; k < right; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
      inversion_count += n1 - i;
    }
  }
}

void mergeSort(vi& A, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main(int argc, char **argv)
{
  int n;
  scanf("%d", &n);
  vi A(n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  mergeSort(A, 0, n);
  printf("%llu\n", inversion_count);
  return 0;
}