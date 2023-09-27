#include <iostream>

using namespace std;

int main(void) {
  int n;
  int taro_cnt = 0, hanako_cnt = 0;
  string taro,hanako;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> taro >> hanako;
    if(taro > hanako)
      taro_cnt += 3;
    else if(taro < hanako)
      hanako_cnt += 3;
    else {
      taro_cnt += 1;
      hanako_cnt += 1;
    }
  }
  cout << taro_cnt << ' ' << hanako_cnt << endl;
  return 0;
}