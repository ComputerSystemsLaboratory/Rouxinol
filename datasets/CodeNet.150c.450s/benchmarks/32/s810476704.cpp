#include <iostream>
using namespace std;
int main(void){
    int m, nmin, nmax;
    while(cin >> m >> nmin >> nmax && m) {
        int p[m];
        for (int i = 0; i < m; ++i) {
            cin >> p[i];
        }
        int diff = 0, pass = 0;
        for (int i = nmin - 1; i < nmax; ++i) {
            int d = p[i] - p[i + 1];
            if (diff <= d) {
                pass = i + 1;
                diff = d;
            }
        }
        cout << pass << endl;
    }
    return 0;
}