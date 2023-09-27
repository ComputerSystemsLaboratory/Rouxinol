#include <algorithm>
#include <iostream>
using namespace std;

int main() {
     int nums[5];
     cin >> nums[0] >> nums[1] >> nums[2] >> nums[3] >> nums[4];
     sort(nums, nums+5, greater<int>());
     cout <<  nums[0] << " " <<nums[1] << " " << nums[2] << " " << nums[3] << " " << nums[4] << endl;
     return 0;
}