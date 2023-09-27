#include <bits/stdc++.h>
#define rep(i,n) for (int i =0; i < (n); ++i)
using namespace std;

int main() {
        vector<int> M = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
        int a;

        rep(i, 28) {
                cin >> a;
                auto r = find(M.begin(), M.end(), a);
//              M.erase(M.begin() + a);
                M.erase(r);
        }

        rep(i, M.size()) {
                cout << M.at(i) << endl;
        }
        return 0;
}

