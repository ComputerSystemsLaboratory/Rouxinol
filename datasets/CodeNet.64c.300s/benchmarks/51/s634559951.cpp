#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  long result;
  cin >> n;
  result = n;

  for (int i = 1; i < n; i++)
    result *= i;

  cout << result << endl;
  return 0;
}