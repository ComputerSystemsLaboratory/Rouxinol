#include <iostream>
#include <limits>
using namespace std;

int pos[20001], height[20001], hmax[20001], l[10000];

int main() {
    string data;
    int p, i, len, m, s, d, k, A;

    getline(cin, data);
    height[0] = 0;
    for (i = 0, len = data.size(); i < len; i++) {
        switch (data[i]) {
            case '\\': d = -1; break;
            case '/': d = 1; break;
            case '_': d = 0; break;
            default: break;
        }
        height[i+1] = height[i] + d;
    }
    hmax[len] = height[len];
    for (i = len; i > 0; i--) {
        hmax[i-1] =  height[i-1] < hmax[i] ? hmax[i]: height[i-1];
    }
    p = 0;
    for (i = 0, p = 0, s = 0, k = 0, A = 0;
         i < len; i++) {
        switch (data[i]) {
            case '\\':
            pos[p++] = i;
            break;
            case '/':
            if (p > 0) {
                s += i - pos[--p];
                if (p == 0 || hmax[i+1] == height[i+1]) {
                    l[k++] = s;
                    A += s;
                    s = 0;
                }
            }
            break;
            default: break;
        }
    }
    cout << A << endl << k;
    for (i = 0; i < k; i++) {
        cout << " " << l[i];
    }
    cout << endl;
    
    return 0;
}