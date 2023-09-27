#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums(3);
    for(auto &val : nums) cin >> val;
    sort(nums.begin(), nums.end());
    
    cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;
    return 0;
}