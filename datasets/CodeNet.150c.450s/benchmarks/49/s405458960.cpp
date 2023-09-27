#include <iostream>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<int> score(n);
        for (int i = 0; i < n; i++) {
            cin >> score[i];
        }
        sort(score.begin(), score.end());

        int s = 0;
        for (int i = 1; i < n - 1; i++) {
            s += score[i];
        }
        cout << s / (n - 2) << endl;
    }

    return 0;
}