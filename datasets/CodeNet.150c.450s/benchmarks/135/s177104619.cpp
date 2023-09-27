#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);

    while(true) {
        int n = 0;
        int m = 0;
        cin >> n;
        cin >> m;
        if(n == 0) {
            break;
        }

        map<int, int> vertical;
        map<int, int> lateral;
        vector<int> road_v;
        vector<int> road_l;
        for(int i = 0; i < n; ++i) {
            int h;
            cin >> h;
            road_v.push_back(h);
        }
        for(int i = 0; i < m; ++i) {
            int w;
            cin >> w;
            road_l.push_back(w);
        }
        for(int i = 0; i < n; ++i) {
            int sum = 0;
            for(int j = i; j < n; ++j) {
                sum += road_v[j];
                vertical[sum] += 1;
            }
        }
        for(int i = 0; i < m; ++i) {
            int sum = 0;
            for(int j = i; j < m; ++j) {
                sum += road_l[j];
                lateral[sum] += 1;
            }
        }
        int result = 0;
        for(auto& pair: vertical) {
            auto& key = pair.first;
            result += vertical[key] * lateral[key];
        }
        cout << result << endl;
    }

    return 0;
}