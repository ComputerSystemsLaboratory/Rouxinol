
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

#define rep(i,n) for (int i = 0; i < int(n); i++)
#define all(c) (c).begin(), (c).end()

int h, w;

int main(int argc, const char * argv[]) {
    while (cin >> h >> w && h > 0 && w > 0) {
        priority_queue<pair<int, int>> pq;
        pair<int, int> p = { - w*w - h*h, - h };
        rep (x,151) rep (y,151) {
            if (x > 0 && y > 0 && x > y) {
                pair<int, int> q = { - x*x - y*y, - y };
                if (p > q) pq.push(q);
            }
        }
        pair<int, int> q = pq.top();
        cout << -q.second << " " << sqrt(-q.first-q.second*q.second) << endl;
    }
}