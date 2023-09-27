#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int32_t q;
    cin >> q;

    while (q--) {
        string X, Y;
        cin >> X >> Y;

        vector<int32_t> lcs((X.size()+1)*(Y.size()+1));
        fill(lcs.begin(), lcs.end(), 0);

        for (int32_t i = 1; i <= X.size(); i++) {
            for (int32_t j = 1; j <= Y.size(); j++) {
                lcs[i*(Y.size()+1)+j] = max(lcs[(i-1)*(Y.size()+1)+j], lcs[i*(Y.size()+1)+j-1]);
                if (X[i-1] == Y[j-1]) {
                    lcs[i*(Y.size()+1)+j] = max(lcs[i*(Y.size()+1)+j], lcs[(i-1)*(Y.size()+1)+j-1] + 1);
                }
            }
        }

        cout << lcs.back() << endl;

    }

    return 0;
}