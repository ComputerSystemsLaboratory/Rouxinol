#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
  vector<int> input(3);
  cin >> input[0] >> input[1] >> input[2];

  sort(input.begin(), input.end());
  cout << input[0] << ' ' << input[1] << ' ' << input[2] << endl;
  return 0;
}