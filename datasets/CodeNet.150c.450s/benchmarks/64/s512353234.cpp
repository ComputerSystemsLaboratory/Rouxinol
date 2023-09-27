#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int> &a, int m, int s) {
    if ( m==0 ) {
        return true;
    } else if (m < 0 || s < 0) {
        return false;
    } else {
        return solve(a, m-a[s], s-1) || solve(a, m, s-1);;
    }
}

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    cin >> q;
    vector<int> m(q);
    for (int i=0; i<q; i++) cin >> m[i];
    
    for (int i=0; i<q; i++) {
        if ( solve(a, m[i], n-1) ) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    } 
}