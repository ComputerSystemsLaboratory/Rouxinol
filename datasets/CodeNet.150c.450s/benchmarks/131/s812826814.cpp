#include <bits/stdc++.h>
using namespace std;

int a0, L;

int solve(vector<int>& A) {
    while (1) {
        string a = to_string(A[A.size() - 1]);
        string zeroKeta = "";
        for (int i = 0; i < L - a.size(); i++) {
            zeroKeta += "0";
        }
        a = zeroKeta + a;
        sort(a.begin(), a.end(), greater<char>());
        int aMax = stoi(a);
        sort(a.begin(), a.end());
        int aMin = stoi(a);
        int an = aMax - aMin;
        for (int i = 0; i < A.size(); i++) {
            if (an == A[i]) {
                cout << i << " " << an << " " << A.size() - i << endl;
                return 0;
            }
        }
        A.push_back(an);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (1) {
        cin >> a0 >> L;
        if (!a0 & !L) break;
        vector<int> A;
        A.push_back(a0);
        solve(A);
    }
}
