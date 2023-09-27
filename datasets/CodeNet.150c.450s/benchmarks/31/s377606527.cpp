#include    <iostream>
#include    <vector>

using namespace std;

int main() {
    int n;
    auto gret = [](const int a, const int b) {
        return (a > b) ? a : b;
    };
    auto less = [](const int a, const int b) {
        return (a < b) ? a : b;
    };

    cin >> n;
    vector<int> R(n);
    for(int i = 0; i < n; i++)
        cin >> R[i];
    
    // ある時刻tについて、時刻0からtにおける価格の最小値をless[t]、利益の最大値をgreat[t]とすると、
    // great[t] = max(great[t-1], R[t]-less[t-1])
    //   ただし、less[0] = R[0], great[0] <= great[1] = R[1] - R[0]とする
    int min = R[0], max = R[1]-R[0];
    for(int t = 1; t < n; t++) {
        max = gret(max, R[t]-min);
        min = less(min, R[t]);
    }

    cout << max << endl;

    return 0;
}
