#include <iostream>
using namespace std;
int main(void){
    int n, m, p;
    while (cin >> n >> m >> p && n) {
        int t = 0, w;
        for (int i = 0; i < n; ++i) {
            int v;
            cin >> v;
            t += v;
            if (i == m - 1) w = v;
        }
        if (w == 0)
            cout << 0 << endl;
        else 
            cout << t * (100 - p) / w << endl;
    }
}