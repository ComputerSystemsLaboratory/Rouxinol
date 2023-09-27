#include<iostream>
#include<vector>

using namespace std;
using P = pair<int, int>;

//  3
// 0 2
//  1

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
    while (1) {
        int n;
        cin >> n;

        if (n == 0) break;

        vector<P> v;
        v.push_back(P(0, 0));
        for (int i = 1; i < n; ++i) {
            int ni, di;
            cin >> ni >> di;
            v.push_back(P(v[ni].first + dx[di], v[ni].second + dy[di]));
        }

        int minx = 1000;
        int miny = 1000;
        int maxx = -1000;
        int maxy = -1000;
        for (P p : v) {
            int x = p.first, y = p.second;
            //cout << " -- " << x << " " << y << endl;
            if (x < minx) minx = x;
            if (x > maxx) maxx = x;
            if (y < miny) miny = y;
            if (y > maxy) maxy = y;
        }

        cout << maxx - minx + 1<< " " << maxy - miny + 1<< endl;
    }
}