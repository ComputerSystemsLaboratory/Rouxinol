#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>

#define REP( i, n) for( int i = 0; i < (n); ++i)
#define FOR( i, a, b) for( int i = (a); i < (b); ++i)

#define pb push_back

const int INF = 1001001000;
const int MOD = (int)1e9 + 7;

using ll = long long;

using namespace std;

vector<int> a;
int n;
int abc;

void merge( int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  int l[n1], r[n2];
  REP( i, n1){
    l[i] = a[left+i];
  }
  REP( i, n2){
    r[i] = a[mid+i];
  }
  l[n1] = INF;
  r[n2] = INF;
  int i = 0, j = 0;
  FOR( k, left, right){
    ++abc;
    if( l[i] <= r[j]){
      a[k] = l[i];
      ++i;
    }else{
      a[k] = r[j];
      ++j;
    }
  }
}

void mergeSort( int left, int right){
  if( left+1 < right){
    int mid = (left+right)/2;
    mergeSort( left, mid);
    mergeSort( mid, right);
    merge( left, mid, right);
  }
}


int main(){
  cin >> n;
  a.resize(n);
  abc = 0;
  REP( i, n){
    cin >> a[i];
  }

  mergeSort( 0, n);

  REP( i, n-1){
    cout << a[i] << " ";
  }
  cout << a[n-1] << endl;
  cout << abc << endl;

}