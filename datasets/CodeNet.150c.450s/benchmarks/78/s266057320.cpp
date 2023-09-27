#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

vector<int> make_table(vector<int> v) {
    vector<int> dp(1000000, 0);
    dp[1] = 1;
    int j;
    int min;
    for (int i = 2; i < dp.size(); i++) {
        //std::cout << "HERE" << std::endl;
        //std::cout << "I = " << i << std::endl;
        j = 0;
        min = 1e09;
        //std::cout << i << ", " << v[j] << ", " << dp[v[j]] << endl;
        while (i >= v[j]) {
            if (min > dp[i - v[j]]) {
                min = dp[i - v[j]];
            }
            j++; 
        }
        dp[i] = min + 1;
        //std::cout << "DP" << i << " = " << dp[i] << std::endl;
        //std::cout << "-------------------------=" << endl;
    }
    return dp; 
}

int main(void) {
    vector<int> all;
    vector<int> odd;

    int tetra = 0;
    int times = 1;
    while (1) {
        tetra = times * (times + 1) * (times + 2) / 6;
        all.push_back(tetra);
        if (tetra % 2 == 1) {
            odd.push_back(tetra);
        }
        times++;
        if (tetra > 1000000) {
            break;
        }
    }
    vector<int> dp_all = make_table(all);
    vector<int> dp_odd = make_table(odd);
    int input;
    while (1) {
        cin >> input;
        if (input == 0) {
            break;
        }
        cout << dp_all[input] << " " << dp_odd[input] << endl;
    }

    return 0;
}