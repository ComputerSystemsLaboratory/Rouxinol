#include <iostream>
#include <string>
using namespace std;
int main() {
  int num;
  cin >> num;
  string taro, hanako;
  int taro_count=0, hanako_count=0;

  for (int i = 0; i < num; i++) {
    cin >> taro >> hanako;
    if (taro == hanako) {
      taro_count++;
      hanako_count++;
    } else if (taro > hanako) {
      taro_count += 3;
    } else {
      hanako_count += 3;
    }
  }
  cout << taro_count <<	" " << hanako_count << endl;
  return 0;
}