#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool notPrime[50000005]={};

void calcPrimes(int n){
    int sqrtn = static_cast<int>(sqrt(n));
    notPrime[0] = true;
    for (int i = 3; i<=sqrtn; i+=2){
        if (notPrime[i/2]) continue;
        for (int j= i * i; j<=n; j+=2*i) notPrime[j/2] = true;
    }
}

int main()
{
    int N = 0;
    cin >> N;
    vector<int> nums(N);
    for (auto & num : nums) cin >> num;
    int numMax = 0;
    numMax = *max_element(nums.begin(), nums.end());
    calcPrimes(numMax);
    int counter = 0;
    for (auto & num : nums){
        if (num == 2 || ((num & 1) && !notPrime[num/2])) ++counter;
    }
    cout << counter << endl;
    return 0;
}