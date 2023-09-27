#include <iostream>
#include <cstdio>
#include <climits>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>
#define MAX 200000
#define INFTY 1<<30
using namespace std;
typedef long long llong;


template <typename T>
class Array
{
private:
  llong merge(int l, int m, int r)
  {
    llong cnt = 0;
    int n1 = m - l;
    int n2 = r - m;
    vector<T> L, R;
    L.resize(n1+1);
    R.resize(n2+1);
    for(int i = 0; i < n1; i++) L[i] = A[l+i];
    for(int i = 0; i < n2; i++) R[i] = A[m+i];
    L[n1] = INFTY;
    R[n2] = INFTY;
    int a = 0;
    int b = 0;
    for(int i = l; i < r; i++)
    {
      if(L[a] <= R[b])
      {
        A[i] = L[a];
        a++;
      }
      else
      {
        A[i] = R[b];
        b++;
        cnt += n1 - a;  // mid + a - b - 1
      }
    }
    //cerr << cnt << endl;
    return cnt;
  }
  int partition(int p, int r)
  {
    T x = A[r];
    int i = p-1;
    T tmp;
    for(int j = p; j < r; j++)
    {
      if(A[j] <= x)
      {
        i++;
        tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
      }
    }
    tmp = A[i+1];
    A[i+1] = A[r];
    A[r] = tmp;
    return i+1;
  }
public:
  Array();
  Array(vector<T> &arr){A = arr;}
  vector<T> A;
  T operator [] (int x)
  {
    return A[x];
  }
  void dispArr()
  {
    for(int i = 0; i < A.size()-1 ; i++) cout << A[i] << " ";
    cout << A[A.size()-1] << endl;
  }
  void swap(int i, int j)
  {
    T tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
  }
  /*
  l : ?????????index
  r : (?????????index + 1) or (?????° + ?????????index)
  */
  llong mergeSort(int l, int r)
  {
    llong v1, v2, v3;
    if(l + 1 < r){
      int m = (l + r) / 2;
      v1 = mergeSort(l, m);
      v2 = mergeSort(m, r);
      v3 = merge(l, m ,r);
      return v1 + v2 + v3;
    }
    else return 0;
  }
  /*
  l : ?????????index
  r : ?????????index
  */
  void quicksort(int p, int r)
  {
    if(p < r)
    {
      int q = partition(p,r);
      quicksort(p, q-1);
      quicksort(q+1, r);
    }
  }
};


int main()
{
  int n; cin >> n;
  vector<int> v;
  v.resize(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  Array<int> T(v);
  cout << T.mergeSort(0, n) << endl;
  //T.dispArr();
  return 0;
}