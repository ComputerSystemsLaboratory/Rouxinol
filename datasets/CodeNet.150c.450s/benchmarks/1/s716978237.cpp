#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int> & As);

void update_LIS(int a, vector<int> & LIS);

void disp(const vector<int> & vec){
    for (auto v : vec) cout << ' ' << v;
    cout << endl;
}

int main()
{
    int n = 0;
    cin >> n;
    vector<int> As(n);
    for (auto & a: As) cin >> a;
    cout << solve(As) << endl;
    return 0;
}

int solve(vector<int> & As){
    vector<int> LIS{As[0]};
    for (auto a : As){
        update_LIS(a, LIS);
    }
    return LIS.size();
}

void update_LIS(int a, vector<int> & LIS){
    if (a > LIS.back()){
        LIS.push_back(a);
        return;
    }else if (a < LIS[0]){
        LIS[0] = a;
        return;
    }
    auto it = lower_bound(LIS.begin(), LIS.end(), a);
    *it = a;
}