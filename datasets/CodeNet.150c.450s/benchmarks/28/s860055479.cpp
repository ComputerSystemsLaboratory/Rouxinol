#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int n, k;
vector<int> w;

bool ok(int P);

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int wi;
        cin >> wi;
        w.push_back(wi);
    }

    int l = 0, h = 1000000000;
    while (l + 1 < h) {
        int m = (l + h) / 2;
        if (ok(m))
            h = m;
        else
            l = m;
    }
    printf("%i\n", h);
}

bool ok(int P)
{
    int cnt = 1;
    int Pl = P;
    for (int a : w) {
        if (P < a)
            return false;
        if (Pl >= a) {
            Pl = Pl - a;
        } else {
            Pl = P - a;
            cnt++;
        }
    }
    return k >= cnt;
}
