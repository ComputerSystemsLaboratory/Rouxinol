#include<iostream>
#include<vector>
using namespace std;

bool can_make(const vector<int>& A, int i, int m){
    if (m == 0) return true;
    if (m < 0 || i >= A.size()) return false;
    return can_make(A, i + 1, m) || can_make(A, i + 1, m - A[i]);
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto& a : A) cin >> a;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int m;
        cin >> m;
        cout << (can_make(A, 0, m) ? "yes" : "no") << endl;
    }
    return 0;
}