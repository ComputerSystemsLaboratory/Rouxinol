#include <iostream>
#include <vector>
using namespace std;

#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int main() {
    int n;
    cin >> n;
    vector<int> A, L;
    PUSH(n,A);
    L.push_back(A[0]);
    FOR(i,1,n) {
        if (L.back() < A[i]) L.push_back(A[i]);
        else *lower_bound(ALL(L), A[i]) = A[i];
    }
    cout << L.size() << endl;
    return 0;
}