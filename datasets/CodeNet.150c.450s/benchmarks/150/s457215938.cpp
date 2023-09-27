#include <iostream>
#include <vector>
using namespace std;

int A[10001];
vector<int> ans;

int main(void) {
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        A[a]++;
    }
    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < A[i]; j++) {
            ans.push_back(i);
        }
    }
    for (int i = 0; i < (int)ans.size(); i++) {
        if (i < (int)ans.size() - 1) cout << ans[i] << " ";
        else cout << ans[i] << endl;
    }
    return 0;
}