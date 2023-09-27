#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    while(cin >> n >> m, n) {
        vector<int> v1(n);
        vector<int> v2(m);
        for(int i=0; i<n; ++i) {
            cin >> v1[i];
        }
        for(int i=0; i<m; ++i) {
            cin >> v2[i];
        }
        int sum1 = accumulate(v1.begin(), v1.end(), 0);
        int sum2 = accumulate(v2.begin(), v2.end(), 0);
        int sub = sum1 - sum2;
        int ret1 = 1000, ret2 = 1000;
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                if((v1[i] - v2[j])*2 == sub) {
                    if(ret1 + ret2 > v1[i] + v2[j]) {
                        ret1 = v1[i];
                        ret2 = v2[j];
                    }
                }
            }
        }
        if(ret1 == 1000) cout << -1 << endl;
        else             cout << ret1 << " " << ret2 << endl;
    }
}