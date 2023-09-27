#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int,pair<int,int>>> v;
    for (int i=1; i<=150; ++i) {
        for (int j=i+1; j<=150; ++j) {
            v.push_back(make_pair(i*i+j*j, make_pair(i, j)));
        }
    }
    sort(v.begin(), v.end());

    int h, w;
    while (cin >> h >> w, (h || w)) {
        for (int i=1; i<(int)v.size(); ++i) {
            if (v[i-1].second.first == h && v[i-1].second.second == w) {
                cout << v[i].second.first << " " << v[i].second.second << endl;
                break;
            }
        }
    }
    return 0;
}