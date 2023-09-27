#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n, r;
    while(cin >> n >> r, n) {
        vector<int> v(n);
        for(int i=0; i<n; ++i) {
            v[i] = n-i;
        }
        
        for(int i=0; i<r; ++i) {
            vector<int> tmp;
            int p, c;
            cin >> p >> c;
            tmp.insert(tmp.begin(), v.begin()+p-1, v.begin()+p+c-1);
            v.erase(v.begin()+p-1, v.begin()+p+c-1);
            v.insert(v.begin(), tmp.begin(), tmp.end());
        }
        cout << v[0] << endl;
    }
}