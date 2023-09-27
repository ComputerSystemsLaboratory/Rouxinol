#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int num;
  cin >> num;

  cout << num << ":";
  int left_num = num;
  double num_sqrt = sqrt(num);
  for(int i = 2; i <= num_sqrt; i++) {
    while(left_num % i == 0) {
      cout << ' ' << i;
      left_num /= i;
    }
  }
  if(left_num > 1) {
    cout << ' ' << left_num;
  }

  cout << endl;
}
