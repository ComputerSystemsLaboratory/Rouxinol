#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void) {
    int n;
    while (cin >> n, n) {
        vector<int> scores(n);
        for (int i = 0; i < n; i++) {
            cin >> scores[i];
        }
        sort(scores.begin(), scores.end());

        cout << accumulate(scores.begin()+1, scores.end()-1, 0) / (scores.size()-2) << endl;
    }

    return 0;
}