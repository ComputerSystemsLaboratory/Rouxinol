#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string num;
  while (cin >> num && num[0] != '0') {
    int sum = 0;
    for (int i = 0; i < num.size(); i++) {
      sum += (num[i] - '0');
    }
    cout << sum << endl;
  }
  return 0;
}