#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
  int nums[5];

  for (int i = 0; i < 5; i++)
    cin >> nums[i];

  sort(nums, nums + 5);

  for (int i = 0; i < 5; i++) {
    cout << nums[4 - i];
    if (i == 4)
      cout << endl;
    else
      cout << ' ';
  }
  return 0;
}