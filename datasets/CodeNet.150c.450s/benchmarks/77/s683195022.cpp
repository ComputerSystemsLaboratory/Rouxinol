#include<iostream>
#include<vector>
#include<complex>
#include<algorithm>

using namespace std;

typedef complex<int> C;

int main() {
    int n, x, y, m, l;
    char d;
    C pos;
    vector<C> jewels;
    while (true) {
        jewels.clear();
        pos = C(10, 10);
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int i=0; i<n; i++) {
            cin >> x >> y;
            jewels.push_back(C(x, y));
        }
        cin >> m;
        for (int i=0; i<m; i++) {
            cin >> d >> l;
            for (int j=0; j<l; j++) {
                switch (d) {
                    case 'N':
                        pos += C(0, 1);
                        break;
                    case 'E':
                        pos += C(1, 0);
                        break;
                    case 'W':
                        pos += C(-1, 0);
                        break;
                    case 'S':
                        pos += C(0, -1);
                        break;
                }
                for (vector<C>::iterator iter=jewels.begin(); iter!=jewels.end();) {
                    if (*iter == pos) {
                        jewels.erase(iter);
                    }
                    else {
                        iter++;
                    }
                }
            }
        }
        if (jewels.empty()) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}