#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, taro_p = 0, hana_p = 0;
  cin >> n;
  for (int i=0;i<n;i++) {
    string taro, hana;
    cin >> taro >> hana;
    if (taro > hana)
      taro_p += 3;
    else if (taro < hana)
      hana_p += 3;
    else {
      taro_p += 1;
      hana_p += 1;
    }
  }
  cout << taro_p << " " << hana_p << endl;
}
