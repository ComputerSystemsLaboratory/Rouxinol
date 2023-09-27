#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int n;
vector<int> C;
vector<int> a;

bool rec(int i, int k) {
    if (k == 0) return true;
    if (i >= a.size()) return false;
    return rec(i + 1, k) || rec(i + 1, k - a[i]);
}


int main() {

    cin >> n;
    a.resize(n);
    C.resize(n);

    for (auto it = a.begin(); it != a.end(); it++) {
        cin >> *it;
    }
    
    int q;
    cin >> q;
    for (int i1 = 0; i1 < q; i1++) {
        int num;
        cin >> num;
        cout << (rec(0, num) ? "yes" : "no") << endl;

    }
    return 0;
};
