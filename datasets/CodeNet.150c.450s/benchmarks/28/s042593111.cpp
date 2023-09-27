#include <iostream>
#include <queue>

using namespace std;

bool ok(int k, int p, queue<int> ws)
{
    int t = 0;
    while (!ws.empty()) {
        int w = ws.front();
        if (w > p)
            return false;
        if (t + w <= p) {
            t += w;
            ws.pop();
        } else {
            --k;
            t = 0;
        }
    }
    
    if (k <= 0)
        return false;
    else
        return true;
}

int main(void)
{
    int k, n, l = 0, r = 1000000000;
    queue<int> ws;
    
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        int w; cin >> w;
        ws.push(w);
    }

    while (l+1 < r) {
        int m = (l+r)/2;
        ok(k, m, ws) ? r = m : l = m;
    }
    cout << (ok(k, r, ws) ? r : l) << endl;

    return 0;
}