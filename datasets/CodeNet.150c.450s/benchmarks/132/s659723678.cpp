#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, p;
    while (cin >> n >> p, n | p) {
        vector<int> stones(n, 0);
        int cur = 0, bowl = p;
        while (1) {
            if (!bowl) {
                swap(bowl, stones[cur]);
                cur = (cur < n - 1) ? cur + 1 : 0;
                continue;
            }
            bowl--;
            stones[cur]++;
            if (!bowl && stones[cur] == p) {
                cout << cur << endl;
                break;
            }
            cur = (cur < n - 1) ? cur + 1 : 0;
        }
    }
    return 0;
}