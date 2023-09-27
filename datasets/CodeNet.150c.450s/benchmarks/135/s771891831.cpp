#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    while (true) {
        int count = 0;
        int input_h, input_w;
        vector<int> h, w;
        vector<int> h_factor, w_factor;
        cin >> n >> m;
        if (n == 0) {
            break;
        }
        for (int i=0; i<n; i++) {
            cin >> input_h;
            h.push_back(input_h);
        }
        for (int i=0; i<m; i++) {
            cin >> input_w;
            w.push_back(input_w);
        }
        for (int i=0; i<n; i++) {
            int total = 0;
            for (int j=i; j<n; j++) {
                total += h[j];
                h_factor.push_back(total);
            }
        }
        sort(h_factor.begin(), h_factor.end());
        for (int i=0; i<m; i++) {
            int total = 0;
            for (int j=i; j<m; j++) {
                total += w[j];
                w_factor.push_back(total);
            }
        }
        sort(w_factor.begin(), w_factor.end());
        for (int i=0; i<(int)h_factor.size(); i++) {
            count += upper_bound(w_factor.begin(), w_factor.end(), h_factor[i])
                    -lower_bound(w_factor.begin(), w_factor.end(), h_factor[i]);
        }
        cout << count << endl;
    }
}