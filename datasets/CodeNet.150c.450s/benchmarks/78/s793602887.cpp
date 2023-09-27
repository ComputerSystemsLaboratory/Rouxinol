#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> tri;
    vector<int> odd;
    constexpr int MAX = 1000000;
    for (int i = 1;; i++) {
        const int num = i * (i + 1) * (i + 2) / 6;
        if (num >= MAX) {
            break;
        }
        tri.push_back(num);
        if (num % 2 == 1) {
            odd.push_back(num);
        }
    }
    constexpr int INF = 1000000000;
    vector<int> num(MAX, INF);
    vector<int> oddnum(MAX, INF);
    num[0] = 0;
    oddnum[0] = 0;
    for (int i = 0; i < MAX; i++) {
        if (num[i] == INF) {
            continue;
        }
        for (const int p : tri) {
            if (i + p < MAX) {
                num[i + p] = min(num[i + p], num[i] + 1);
            }
        }
    }
    for (int i = 0; i < MAX; i++) {
        if (oddnum[i] == INF) {
            continue;
        }
        for (const int p : odd) {
            if (i + p < MAX) {
                oddnum[i + p] = min(oddnum[i + p], oddnum[i] + 1);
            }
        }
    }


    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        cout << num[n] << " " << oddnum[n] << endl;
    }
    return 0;
}