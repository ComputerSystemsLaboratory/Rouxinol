#include<iostream>
#include<string>

using namespace std;

int A[500000] = {0};
int n, comparisons=0;

void merge(int l, int m, int r)
{
  int n1 = m - l;
  int n2 = r - m;
  int L[n1], R[n2];
  for (int i = 0; i < n1; ++i)
    L[i] = A[l+i];
  for (int i = 0; i < n2; ++i)
    R[i] = A[m+i];
  int i = 0, j = 0;
  for (int k = l; k < r; ++k) {
    if (i == n1) {
      while(j < n2) {
        A[k++] = R[j++];
        ++comparisons;
      }
      break;
    } else if (j == n2) {
      while(i < n1) {
        A[k++] = L[i++];
        ++comparisons;
      }
      break;
    } else {
      ++comparisons;
      if (L[i] <= R[j]) A[k] = L[i], ++i;
      else A[k] = R[j], ++j;
    }
  }
}

void sort(int l, int r) {
  if (l + 1 < r) {
    int m = (l+r)/2;
    sort(l, m);
    sort(m, r);
    merge(l, m, r);
  }
}

int main()
{
  cin >> n;
  for(int i = 0; i<n; ++i) cin >> A[i];

  sort(0, n);

  for(int i = 0; i<n; ++i) {
    if(i) cout << ' ';
    cout << A[i];
  }
  cout << endl;
  cout << comparisons << endl;
}
