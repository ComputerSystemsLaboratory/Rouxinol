#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int main() {
    int n, m;
    while(true) {
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        vector<int> h_vec, w_vec;
        unordered_map<int, int> heights, widths;
        for(int i = 0; i < n; i++) {
            int h; cin >> h;
            h_vec.emplace_back(h);
        }
        for(int i = 0; i < m; i++) {
            int w; cin >> w;
            w_vec.emplace_back(w);
        }
        for(int i = 0; i < n; i++) {
            int h = 0;
            for(int j = i; j < n; j++) {
                h += h_vec[j];
                heights[h]++;
            }
        }
        for(int i = 0; i < m; i++) {
            int w = 0;
            for(int j = i; j < m; j++) {
                w += w_vec[j];
                widths[w]++;
            }
        }
        int ans = 0;
        for(const auto h : heights) {
            auto search = widths.find(h.first);
            if(search != widths.end()) {
                ans += h.second*search->second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
