#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    int w, n;
    cin >> w >> n;
    vector<int> v(w);
    iota(v.begin(), v.end(), 1);
    while(n--) {
        int an, bn;
        char c;
        cin >> an >> c >> bn;
        
        int a = v[an-1];
        int b = v[bn-1];
        v[an-1] = b;
        v[bn-1] = a;
    }
    for(int i=0; i<w; i++) {
        cout << v[i] << endl;
    }
    return 0;
}