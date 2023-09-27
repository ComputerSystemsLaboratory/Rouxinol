#include <iostream>
#include <string>

using namespace std;

int main() {
 string number;
 int sum;

 while(1) {
  cin >> number;
  if (number.length() == 1 && number[0] - '0' == 0) break;
  sum = 0;
  for (int i = 0; i < number.length(); i++) sum += number[i] - '0';
  cout << sum << endl;
 }

 return 0;
}