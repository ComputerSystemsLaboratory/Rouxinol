#include <iostream>
#include <vector>
using namespace std;

bool dfs(vector<int>& a, int target, int idx=0, int total=0) {
    if (target == total) {
        return true;
    }
    else if ((idx == a.size()) || (total > target)) {
        return false;
    }
    else if (dfs(a, target, idx+1, total+a[idx])) {
        return true;
    }
    else if (dfs(a, target, idx+1, total)) {
        return true;
    }
    return false;
}

int main() {
    int n, q, tmp;
    vector<int> a;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }

    cin >> q;
    for (int i=0; i<q; i++) {
        cin >> tmp;
        if (dfs(a, tmp)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}