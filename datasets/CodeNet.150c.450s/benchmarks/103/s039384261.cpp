#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cctype>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <sstream>
#include <deque>

#define REP(i, n) for ( int i = 0; i < n; i++ )
#define MP(a, b) make_pair(a, b)

using namespace std;

typedef pair<vector<int>, int> data;

/*
全探索
9! = 362880 余裕

持っている配列、ステップ数
*/

int sum(vector<int> nums) {
    int sum = 0;
    REP(i, nums.size()) {
        sum += nums[i];
    }
    return sum;
}

bool insertable(int num, vector<int> nums) {
    REP(i, nums.size()) {
        if ( num == nums[i] ) return false;
    }
    return true;
}

int dump(vector<int> n) {
    REP(i, n.size()) {
        cout << n[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, s;

    while(cin >> n >> s, n||s) {
        queue<data> open;
        int cnt = 0;

        // 初期値をpush
        REP(i, 10-(n-1)) {
            vector<int> num(n);
            num[0] = i;
            open.push( MP(num, 1) );
        }

        while(!open.empty()) {
            data d = open.front(); open.pop();
            vector<int> nums = d.first;
            int c = d.second;

            // cout << c << " " << n << endl;
            if ( c == n ) {
                if ( s == sum(nums) ) {
                    cnt++;
                    // dump(nums);
                }
                continue;
            }

            for ( int i = nums[c-1]; i <= 9; i++ ) {
                if ( insertable(i, nums) ) {
                    nums[c] = i;
                    open.push( MP(nums, c+1) );
                }
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}