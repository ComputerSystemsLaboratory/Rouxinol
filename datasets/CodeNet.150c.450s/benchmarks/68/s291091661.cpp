#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int result=1000000;
        int n; cin >> n;
        if (n==0) break;
        vector<int> A(n);
        for (int i=0;i<n;i++) {
            cin >> A.at(i);
            if (i >= 1) {
                for (int j=0;j<i;j++) {
                    if (abs(A.at(i) - A.at(j)) < result) result = abs(A.at(i) - A.at(j));
                }
            }
        }
        cout << result << endl;
    }
}
