#include <iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int counter = 0, a[110];
  for(int i = 0; i < n; i++) cin >> a[i];

  //--- Selection Sort ---//
  for(int i = 0; i < n; i++) {
    //--- 未探索の先頭を minj にしておく ---//
    int minj = i;
    //--- 未探索部分の最小を探す ---//
    for(int j = i; j < n; j++) {
      if(a[j] < a[minj]) minj = j;
    }
    //--- 未探索部分の先頭よりも小さいものが見つかった場合 ---//
    if(i != minj) {
      swap(a[i], a[minj]);
      counter++;
    }
  }

  for(int i = 0; i < n; i++) cout << a[i] << (i == n-1 ? "\n" : " ");
  cout << counter << endl;
}

