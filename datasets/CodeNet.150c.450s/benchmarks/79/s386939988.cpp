#include <iostream>
#define MAX_N 50
using namespace std;


int a[MAX_N];
int n, r, p, c;


void set_deck() {
  for(int i = 0; i < n; ++i) {
    a[i] = n - i;
  }
}


void PRINT() {
  cout << "----------" << endl;
  for(int i = 0; i < n; ++i) {
    cout << a[i] << endl;
  }
  cout << "----------" << endl;
}


void cut() {
  int tmp[MAX_N];

  // 青を避難
  for(int i = 0; i < p - 1; ++i) {
    tmp[i] = a[i];
  }

  // 黄色を配置
  for(int i = 0; i < c; ++i) {
    a[i] = a[p - 1 + i];
  }

  // 青を配置
  for(int i = 0; i < p - 1; ++i) {
    a[c + i] = tmp[i];
  }
}


int main() {
  while(cin >> n >> r && n && r) {
    set_deck();
    //PRINT();
    for(int i = 0; i < r; ++i) {
      cin >> p >> c;
      cut();
      //PRINT();
    }
    cout << a[0] << endl;
  }
  return 0;
}

