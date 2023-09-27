#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int W;
  int N;
  int num[30];

  
  cin >> W;
  cin >> N;
  for (int i = 0; i < W; i++) {
    num[i] = i+1;
  }
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a;
    cin.ignore();
    cin >> b;
    swap(num[a-1], num[b-1]);
  }
  for (int i = 0; i < W; i++) {
    cout << num[i] << endl;
  }
  return 0;
}