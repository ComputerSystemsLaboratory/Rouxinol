#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

const int N = 205;
const int lg = 61;

vector<LL> xor_basis(vector <LL> a) {
    LL n = a.size();
    LL row = 0;
    vector<LL> basis;
    vector<bool> colm(lg, 0);
    for(LL k = lg-1; k >= 0; k--) {
        for(LL i = row; i < n; i++) {
            if((a[i]>>k)&1) {
                swap(a[i], a[row]);
                break;
            }
        }
        if(row < n && (a[row]>>k)&1) {
            basis.push_back(a[row]);
            colm[k] = 1;
            for(int i = row + 1; i < n; i++) {
                if((a[i]>>k)&1) a[i] ^= a[row];
            }
            row++;
        }
    }
    return basis;
}


LL A[N];

int main() {
    // freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> A[i];
        string S;
        cin >> S;
        bool can = false;
        vector<LL> basis;
        for(int i = n-1; i >= 0; i--) {
            if(S[i] == '0') {
                basis.push_back(A[i]);
                basis = xor_basis(basis);
            }
            else {
                vector<LL> new_basis = basis;
                new_basis.push_back(A[i]);
                new_basis = xor_basis(new_basis);
                if(new_basis.size() > basis.size()) {
                    can = true;
                    break;
                }
            }
        }
        cout << can << "\n";
    }

    return 0;
}

