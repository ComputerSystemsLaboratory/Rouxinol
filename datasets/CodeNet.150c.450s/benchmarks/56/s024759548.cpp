#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    
    vector<long long int> nums(n);
    for(auto &val : nums) cin >> val;
    
    auto begin = nums.begin();
    auto end = nums.end();
    
    cout << *(min_element(begin, end)) << " " << *(max_element(begin, end))
        << " " << accumulate(begin, end, (long long int)0) << endl;
    
    return 0;
}