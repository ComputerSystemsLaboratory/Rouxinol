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
vector<int> a;
int cnt = 0;
void merge(int left, int mid, int right){
  int n1 = mid-left;
  int n2 = right - mid;
  vector<int> l(n1+1);
  vector<int> r(n2+1);

  for(int i=0; i<n1; i++) l[i] = a[left + i];
  for(int i=0; i<n2; i++) r[i] = a[mid + i];

  l[n1] = inf;
  r[n2] = inf;
  int i = 0, j = 0;
  for(int k=left; k<right; k++){
    if( l[i] <= r[j] ){
      a[k] = l[i];
      i++;
    }else{
      a[k] = r[j];
      j++;
    }
    cnt++;
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
  for(int i=0; i<n; i++) cin >> a[i];

  mergeSort(0, n);
  for(int i=0; i<n; i++){
    if( i == n-1 ) cout << a[i] << endl;
    else cout << a[i] << " ";
  }
  cout << cnt << endl;
  return 0;
}

// EOF