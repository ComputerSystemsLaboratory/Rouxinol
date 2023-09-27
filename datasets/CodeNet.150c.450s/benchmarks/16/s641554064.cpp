#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    vector<int> down;
    vector<pair<int, int>> area_left;
    int x = 0, area;
    for(char c: s) {
        if(c == '\\') {
            down.emplace_back(x);
        } else if(c == '/' && !down.empty()) {
            area = x - down.back();
            while(!area_left.empty() && down.back() < area_left.back().second) {
                area += area_left.back().first;
                area_left.pop_back();
            }
            area_left.emplace_back(make_pair(area, down.back()));
            down.pop_back();
        }
        x++;
    }

    int sum = 0;
    for(pair<int, int> p: area_left) sum += p.first;
    printf("%d\n", sum);
    printf("%d", area_left.size());
    for(pair<int, int> p: area_left) printf(" %d", p.first);
    printf("\n");

    return 0;
}
