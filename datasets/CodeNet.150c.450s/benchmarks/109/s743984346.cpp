#include "bits/stdc++.h"

using namespace std;

int toTimeSecond(const string& s) {
    int ret = atoi(s.substr(0, 2).c_str()) * 3600;
    ret += atoi(s.substr(3, 2).c_str()) * 60;
    ret += atoi(s.substr(6, 2).c_str());
    return ret;
}

void Main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<int> imos(86410 * 2, 0);
        for (int i = 0; i < n; ++i) {
            string depS, arrS;
            cin >> depS >> arrS;
            int dep = 2 * toTimeSecond(depS);
            int arr = 2 * toTimeSecond(arrS);
            imos[dep] += 1;
            imos[arr - 1] -= 1;
        }
        for (int i = 1; i < imos.size(); ++i) {
            imos[i] += imos[i - 1];
        }
        int ans = *max_element(imos.begin(), imos.end());
        cout << ans << endl;
    }
}

int main() {
    std::cout << std::fixed << std::setprecision(15);
    Main();
    return 0;
}

