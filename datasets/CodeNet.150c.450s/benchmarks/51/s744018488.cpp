#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int stu;
  bool list[31] = {false};
  for(int i=0;i<28;i++) {
    cin >> stu;
    list[stu] = true;
  }
  for(int i=1;i<=30;i++) {
    if(!list[i]) {
      cout << i << endl;
    }
  }
}