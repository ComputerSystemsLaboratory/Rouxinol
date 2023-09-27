// AOJ 1165 "角角画伯，かく悩みき" (ICPC国内予選 2010 Problem A)
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    while (true) {
        int N;
        vector<pair<int, int> > s;
        pair<int, int> p;
        cin >> N;
        if (N == 0) {
            break;
        }
        p.first = p.second = 0;
        s.push_back(p);
        int xsize, ysize;
        int xmax = 0;
        int xmin = 0;
        int ymax = 0;
        int ymin = 0;
        for (int i = 1; i < N; i++) {
            int dx[] = {-1, 0, 1, 0};
            int dy[] = {0, -1, 0, 1};
            int n, d;
            cin >> n >> d;
            int x = s[n].first + dx[d];
            int y = s[n].second + dy[d];
            p.first = x;
            p.second = y;
            s.push_back(p);
            xmax = max(xmax, x);
            xmin = min(xmin, x);
            ymax = max(ymax, y);
            ymin = min(ymin, y);
        }
        xsize = xmax - xmin + 1;
        ysize = ymax - ymin + 1;
        cout << xsize << " " << ysize << endl;
    }
    
    return 0;
}