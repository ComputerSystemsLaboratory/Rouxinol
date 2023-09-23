#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, y, s;

    while(cin >> x >> y >> s, x | y | s) {

        int max_val = 0;

        for(int i = 1; i < s; ++i) {
            for(int j = 1; j < s; ++j) {
                int sum_before = i * (100 + x) / 100 + j * (100 + x) / 100;
                int sum_after = i * (100 + y) / 100 + j * (100 + y) / 100;
                if(sum_before == s && sum_after > max_val) {
                    max_val = sum_after;
                }
            }
        }

        cout << max_val << endl;

    }

}