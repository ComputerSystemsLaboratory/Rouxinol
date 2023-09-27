#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

int INF = 10000000;
vector<int> po;
vector<int> poo;
vector<int> dp(1000005, INF);
vector<int> dp2(1000005, INF);

void init() {
    for (int i = 1;; i++) {
        int tmp = i*(i+1)*(i+2) / 6;
        if (tmp > 1000000) break;
        po.push_back(tmp);
        if (tmp%2 == 1) poo.push_back(tmp);
    }
    
    dp[0] = 0;
    for (int i = 0; i < 1000001; i++) {
        for (int j = 0; j < po.size(); j++) {
            int sum = i + po[j];
            if (sum <= 1000000) {
                dp[sum] = min(dp[sum], dp[i] + 1);
            }
        }
    }
    
    dp2[0] = 0;
    for (int i = 0; i < 1000001; i++) {
        for (int j = 0; j < poo.size(); j++) {
            int sum = i + poo[j];
            if (sum <= 1000000) {
                dp2[sum] = min(dp2[sum], dp2[i] + 1);
            }
        }
    }
}

int main(void){
    // Your code here!
    vector<pair<int, int>> ans;
    init();
    int N;
    while (cin >> N, N) {
        ans.push_back({dp[N], dp2[N]});
    }
    for (auto &p : ans) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}

