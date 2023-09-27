#include<iostream>
#include<vector>

using namespace std;

vector<int> A;

bool makeCombination(int depth, int m)
{
    if (depth == 0) {
        if (m == 0) {
            return true;
        } else {
            return false;
        }
    } else {
        int target = A[depth - 1];
        //cout << "target: " << target << " the rest: " << m - target << endl;
        if (m - target < 0) {
            if (makeCombination(depth - 1, m)) return true;
            else return false;
        } else {
            if (makeCombination(depth - 1, m - target) || makeCombination(depth - 1, m)) return true;
            else return false;
        }
    }

}

int main()
{
    int n, q;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int target;
        cin >> target;
        if (makeCombination(n, target)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}