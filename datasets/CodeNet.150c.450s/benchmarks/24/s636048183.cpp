#include <iostream>
#include <algorithm>
#include <functional>
#include <utility>
using namespace std;

int main() {
    int n, m;
    while(true) {
        pair<int, int> guard[100000];
        int exp = 0;
        cin >> n >> m;
        if(n == 0 && m == 0) {
            break;
        }
        for(int i = 0; i < n; ++i) {
            cin >> guard[i].second >> guard[i].first;
            exp += guard[i].second * guard[i].first;
        }
        sort(guard, guard + n, greater<pair<int, int> >());
        for(int i = 0; i < n; ++i) {
            int cost = min(guard[i].second, m);
            m -= cost;
            exp -= cost * guard[i].first;
            if(m <= 0) {
                break;
            }
        }
        cout << exp << endl;
    }
    return 0;
}