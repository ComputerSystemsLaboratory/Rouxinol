#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int selection_sort(vector<int>& a,int N) {
  int cnt = 0;
  int flag = 1;
  for(int i=0;i<N;i++) {
    int minj = i;
    for(int j=i;j<N;j++) {
      if(a[j] < a[minj]) {
        minj = j;
      }
    }
    if(minj != i) {
      swap(a[minj],a[i]);
      cnt++;
    }
  }
  return cnt;
}

int main(void) {
  int N;
  vector<int> a;

  /* input */
  cin >> N;
  for(int i=0;i<N;i++) {
    int _t;
    cin >> _t;
    a.push_back(_t);
  }

  int cnt = selection_sort(a,N);
  for(int i=0;i<N;i++) {
    cout << a[i] << (i+1==N ? "" : " ");
  }
  cout << endl;
  cout << cnt << endl;
}