#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool is_valid(int p, int k, const vector<int> & ws){
    int num_trucks = 1;
    int load = 0;
    for (const auto w : ws){
        if (load + w <= p){
            load += w;
        }else{
            num_trucks += 1;
            if (num_trucks > k) return false;
            load = w;
        }
    }
    return true;
}

int main()
{
    int n = 0;
    int k = 0;
    cin >> n >> k;
    vector<int> ws(n);
    for (auto & w : ws) cin >> w;
    int sum_w = accumulate(ws.begin(), ws.end(), 0);
    int minP = max((sum_w / k), *max_element(ws.begin(), ws.end())) - 1;
    int maxP = sum_w;
    while (minP + 1 < maxP){
        int midP = (minP + maxP) / 2;
        if (is_valid(midP, k, ws)){
            maxP = midP;
        }else{
            minP = midP;
        }
    }
    cout << maxP << endl;
    
    return 0;
}