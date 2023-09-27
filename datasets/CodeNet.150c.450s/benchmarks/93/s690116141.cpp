#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
int inf = 1000000000;
vector< pair<int, char> > a;
vector< pair<int, char> > aa;

bool cl(pair<int, char> l, pair<int, char> r){
  // if( l.first == r.first ) return l.second < r.second;
  return l.first < r.first;
}

int partition(int p, int r){
  int x = a[r].first;
  int i = p-1;
  for(int j=p; j<r; j++){
    if( a[j].first <= x ){
      i++;
      swap(a[i], a[j]);
    }
  }
  swap(a[i+1], a[r]);
  return i + 1;
}

void quickSort(int p, int r){
  if( p < r ){
    int q = partition(p, r);
    quickSort(p, q-1);
    quickSort(q+1, r);
  }
}

void merge(int left, int mid, int right){
  int n1 = mid-left;
  int n2 = right - mid;
  vector< pair<int, char> > l(n1+1);
  vector< pair<int, char> > r(n2+1);

  for(int i=0; i<n1; i++) l[i] = aa[left + i];
  for(int i=0; i<n2; i++) r[i] = aa[mid + i];

  l[n1].first = inf;
  r[n2].first = inf;
  int i = 0, j = 0;
  for(int k=left; k<right; k++){
    if( l[i].first <= r[j].first ){
      aa[k] = l[i];
      i++;
    }else{
      aa[k] = r[j];
      j++;
    }
  }

}
void mergeSort(int left, int right){
  if( left + 1 < right ){
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid, right);
    merge(left, mid, right);
  }
}

int main(void) {

  int n;
  cin >> n;
  a.resize(n);
  for(int i=0; i<n; i++) cin >> a[i].second >> a[i].first;

  vector< pair<int, char> > b = a;
  aa = a;
  sort(b.begin(), b.end(), cl);
  quickSort(0, n-1);
  mergeSort(0, n);
  cout << (a == aa ? "Stable" : "Not stable") << endl;
  for(int i=0; i<n; i++) cout << a[i].second << " " << a[i].first << endl;


  return 0;
}

// EOF