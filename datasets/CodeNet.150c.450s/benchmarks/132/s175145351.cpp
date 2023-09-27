#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int solve(int n, int p) {
    int pepole[n];
    int ans = -1;
    for (int i = 0; i < n; i++) {
        pepole[i] = 0;
    }
    int check = 0;
    while (1) {
        for (int i = 0; i < n; i++) {
            if (p != 0) {
                p--;
                pepole[i]++;
            } else if (pepole[i] != 0) {
                p += pepole[i];
                pepole[i] = 0;
            } else {
                check = 0;
                for (int j = 0; j < n; j++) {
                    if (pepole[j] != 0) {
                        ans = j;
                        check++;
                    }
                }
                if (check == 1) break;
            }
        }
        if (check == 1) break;
    }
    return ans;
}

int main() {
    cin.tie(0);
    vector<int> ans;
    int n, p;
    while (1) {
        cin >> n >> p;
        if (n == 0 && p == 0) break;
        ans.push_back(solve(n, p));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}
