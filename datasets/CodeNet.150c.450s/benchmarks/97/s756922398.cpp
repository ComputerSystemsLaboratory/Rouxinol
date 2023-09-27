#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;

int main(void) {
    int N;

    while (cin >> N, N)  {
        vector<pii> D(N);
        D[0] = pii(0, 0);

        for (int i = 1; i < N; i++) {
            int n, d; cin >> n >> d;
            pii s = D[n];

            switch (d) {
            case 0:
                s.first--;
                break;
            case 1:
                s.second++;
                break;
            case 2:
                s.first++;
                break;
            case 3:
                s.second--;
                break;
            }

            D[i] = s;
        }

        int xmin = 0, xmax = 0, ymin = 0, ymax = 0;
        for (int i = 1; i < N; i++) {
            xmin = min(xmin, D[i].first);
            xmax = max(xmax, D[i].first);
            ymin = min(ymin, D[i].second);
            ymax = max(ymax, D[i].second);
        }

        cout << xmax-xmin+1 << " " << ymax-ymin+1 << endl;
    }

    return 0;
}