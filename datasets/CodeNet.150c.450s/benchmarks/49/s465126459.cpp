#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define RREP(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR(i, l, r) for(int i = l; i < r; i++)
#define RFOR(i, l,r) for(int i= (l)-1; i>= (r) ; i--)


int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin >> n)
    {
        if(n == 0)
            return 0;
        vector<int> nums;
        REP(i, n)
        {
            int tmp;
            cin >> tmp;
            nums.push_back(tmp);
        }
        sort(nums.begin(),nums.end());
        int sum = 0;
        RFOR(i, n-1, 1)
            sum += nums[i];
        cout << sum / (n-2) << '\n';
    }
}